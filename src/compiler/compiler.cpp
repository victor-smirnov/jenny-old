
// Copyright 2020 Victor Smirnov
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "clang/Lex/PreprocessorOptions.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Lex/HeaderSearch.h"

#include "clang/Basic/DiagnosticOptions.h"
#include "clang/Basic/Builtins.h"
#include "clang/CodeGen/ModuleBuilder.h"
#include "clang/Parse/ParseAST.h"

#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/CompilerInvocation.h"
#include "clang/Frontend/FrontendDiagnostic.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"

#include "llvm/IR/Module.h"


#include <jenny/compiler.hpp>

using namespace clang;

namespace jenny {

std::unique_ptr<ASTUnit> JennyCompiler::create_ast_unit()
{
    return ASTUnit::create(
        compiler_invocation_,
        diagnostics_engine_,
        CaptureDiagsKind::All,
        true
    );
}

std::unique_ptr<clang::ASTUnit> JennyCompiler::load_ast_unit(const std::string &filename)
{
    return ASTUnit::LoadFromASTFile(
        filename,
        compiler_instance_.getPCHContainerReader(),
        ASTUnit::LoadEverything,
        diagnostics_engine_,
        FileSystemOptions{}
    );
}

JennyCompiler::JennyCompiler()
{
    compiler_invocation_ = std::make_shared<CompilerInvocation>();

    IntrusiveRefCntPtr<DiagnosticOptions> diag_opts = new DiagnosticOptions();
    TextDiagnosticPrinter *diag_client =
        new TextDiagnosticPrinter(llvm::errs(), &*diag_opts);

    IntrusiveRefCntPtr<DiagnosticIDs> diag_id(new DiagnosticIDs());

    diagnostics_engine_ = new DiagnosticsEngine(diag_id, &*diag_opts, diag_client);

    CompilerInvocation::CreateFromArgs(*compiler_invocation_, {"-fsyntax-only"}, *diagnostics_engine_);

    compiler_instance_.setDiagnostics(&*diagnostics_engine_);

    auto to = std::make_shared<TargetOptions>();
    to->Triple = llvm::sys::getDefaultTargetTriple();

    TargetInfo *tin = TargetInfo::CreateTargetInfo(compiler_instance_.getDiagnostics(), to);

    compiler_instance_.setTarget(tin);
    compiler_instance_.createFileManager();
    compiler_instance_.createSourceManager(compiler_instance_.getFileManager());
    compiler_instance_.createPreprocessor(TU_Complete);
    compiler_instance_.createASTContext();
}


std::unique_ptr<llvm::Module> JennyCompiler::compile(
        ASTUnit& ast_unit,
        llvm::LLVMContext& context
)
{
    CodeGenerator* codegen = CreateLLVMCodeGen(
        compiler_instance_.getDiagnostics(),
        "the_module",
        compiler_instance_.getHeaderSearchOpts(),
        compiler_instance_.getPreprocessorOpts(),
        compiler_instance_.getCodeGenOpts(),
        context
    );

    compiler_instance_.getDiagnosticClient().BeginSourceFile(compiler_instance_.getLangOpts(), nullptr);

    compiler_instance_.setFileManager(&ast_unit.getFileManager());
    compiler_instance_.setSourceManager(&ast_unit.getSourceManager());
    compiler_instance_.setPreprocessor(ast_unit.getPreprocessorPtr());
    Preprocessor &PP = compiler_instance_.getPreprocessor();
    PP.getBuiltinInfo().initializeBuiltins(
                PP.getIdentifierTable(),
                PP.getLangOpts()
    );

    compiler_instance_.setASTContext(&ast_unit.getASTContext());
    compiler_instance_.setASTConsumer(std::unique_ptr<CodeGenerator>{codegen});

    compiler_instance_.createSema(TU_Complete, nullptr);

    ParseAST(
        compiler_instance_.getSema(),
        compiler_instance_.getFrontendOpts().ShowStats,
        compiler_instance_.getFrontendOpts().SkipFunctionBodies
    );

    return std::unique_ptr<llvm::Module>{codegen->ReleaseModule()};
}

}
