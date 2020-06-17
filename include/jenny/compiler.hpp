
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

#pragma once

#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/CompilerInvocation.h>
#include <clang/Frontend/ASTUnit.h>

#include <llvm/IR/LLVMContext.h>

#include <clang/Basic/Diagnostic.h>

#include <memory>

namespace jenny {

class JennyCompiler {
    clang::CompilerInstance compiler_instance_;
    std::shared_ptr<clang::CompilerInvocation> compiler_invocation_;
    clang::IntrusiveRefCntPtr<clang::DiagnosticsEngine> diagnostics_engine_;
public:
    JennyCompiler();

    std::unique_ptr<clang::ASTUnit> create_ast_unit();
    std::unique_ptr<clang::ASTUnit> load_ast_unit(const std::string& path);

    std::unique_ptr<llvm::Module> compile(
            clang::ASTUnit& ast_unit,
            llvm::LLVMContext& context);
};

}
