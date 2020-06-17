
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

#include "llvm/ADT/SmallString.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/Orc/CompileUtils.h"
#include "llvm/ExecutionEngine/Orc/ExecutionUtils.h"
#include "llvm/ExecutionEngine/Orc/IRCompileLayer.h"
#include "llvm/ExecutionEngine/Orc/RTDyldObjectLinkingLayer.h"
#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/Mangler.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/Path.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"

#include <memory>

namespace jenny {

class JIT {
private:
    llvm::orc::ExecutionSession execution_session_;
    std::unique_ptr<llvm::TargetMachine> target_machine_;
    const llvm::DataLayout data_layout_;
    llvm::orc::MangleAndInterner mangle_{execution_session_, data_layout_};
    llvm::orc::JITDylib &main_jd_{execution_session_.createJITDylib("<main>")};
    llvm::orc::RTDyldObjectLinkingLayer object_layer_{execution_session_, create_mem_mgr};
    llvm::orc::IRCompileLayer compile_layer_{
        execution_session_,
        object_layer_,
        std::make_unique<llvm::orc::SimpleCompiler>(*target_machine_)
    };

    static std::unique_ptr<llvm::SectionMemoryManager> create_mem_mgr();

    JIT(
        std::unique_ptr<llvm::TargetMachine> target_machine,
        llvm::DataLayout data_layout,
        std::unique_ptr<llvm::orc::DynamicLibrarySearchGenerator> process_symbols_generator
    );

public:
    static llvm::Expected<std::unique_ptr<JIT>> create();

    const llvm::TargetMachine &target_machine() const;

    llvm::Error add_module(llvm::orc::ThreadSafeModule module);

    llvm::Expected<llvm::JITEvaluatedSymbol> find_symbol(const llvm::StringRef &name);

    llvm::Expected<llvm::JITTargetAddress> get_symbol_address(const llvm::StringRef &name);
};

}
