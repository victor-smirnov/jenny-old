
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

#include <jenny/jit.hpp>

using namespace llvm;
using namespace llvm::orc;

namespace jenny {

std::unique_ptr<SectionMemoryManager> JIT::create_mem_mgr() {
    return std::make_unique<SectionMemoryManager>();
}

JIT::JIT(
    std::unique_ptr<TargetMachine> target_machine,
    DataLayout data_layout,
    std::unique_ptr<DynamicLibrarySearchGenerator> process_symbols_generator
):
    target_machine_(std::move(target_machine)),
    data_layout_(std::move(data_layout))
{
    llvm::sys::DynamicLibrary::LoadLibraryPermanently(nullptr);
    main_jd_.addGenerator(std::move(process_symbols_generator));
}


Expected<std::unique_ptr<JIT>> JIT::create()
{
    auto jtmb = llvm::orc::JITTargetMachineBuilder::detectHost();
    if (!jtmb)
        return jtmb.takeError();

    auto target_machine = jtmb->createTargetMachine();
    if (!target_machine)
        return target_machine.takeError();

    auto data_layout = (*target_machine)->createDataLayout();

    auto process_symbols_generator =
        llvm::orc::DynamicLibrarySearchGenerator::GetForCurrentProcess(
            data_layout.getGlobalPrefix()
        );

    if (!process_symbols_generator)
        return process_symbols_generator.takeError();

    return std::unique_ptr<JIT>(new JIT(
        std::move(*target_machine),
        std::move(data_layout),
        std::move(*process_symbols_generator))
    );
}

const TargetMachine &JIT::target_machine() const { return *target_machine_; }

Error JIT::add_module(ThreadSafeModule module) {
    return compile_layer_.add(main_jd_, std::move(module));
}

Expected<JITEvaluatedSymbol> JIT::find_symbol(const StringRef &name) {
    return execution_session_.lookup({&main_jd_}, mangle_(name));
}

Expected<JITTargetAddress> JIT::get_symbol_address(const StringRef &name)
{
    auto sym = find_symbol(name);
    if (!sym)
        return sym.takeError();
    return sym->getAddress();
}

}
