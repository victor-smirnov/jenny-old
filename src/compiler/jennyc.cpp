
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
#include <jenny/compiler.hpp>
#include <jenny/jit.hpp>

#include "llvm/Support/Error.h"

#include <iostream>

using namespace jenny;


llvm::ExitOnError ExitOnErr;

int main(int argc, const char **argv)
{
    std::unique_ptr<llvm::LLVMContext> ctx = std::make_unique<llvm::LLVMContext>();

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();

    JennyCompiler jc;
    auto unit = jc.load_ast_unit(argv[1]);

    int Res = 255;
    auto module = jc.compile(*unit.get(), *ctx.get());

    if (module)
    {
        auto jit_r = ExitOnErr(JIT::create());
        ExitOnErr(jit_r->add_module(
            llvm::orc::ThreadSafeModule(std::move(module), std::move(ctx)))
        );
        auto Main = (int (*)(...))ExitOnErr(jit_r->get_symbol_address("main"));
        Res = Main();
    }

    llvm::llvm_shutdown();

    return Res;
}
