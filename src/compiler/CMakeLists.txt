

set(TARGET_NAME jennyc)

add_executable(${TARGET_NAME} jennyc.cpp compiler.cpp jit.cpp)
SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES COMPILE_FLAGS "${JENNY_COMPILE_FLAGS}")
set_target_properties(${TARGET_NAME} PROPERTIES LINK_FLAGS "${JENNY_LINK_FLAGS}")
target_link_libraries(${TARGET_NAME} PRIVATE
    LLVMCore
    LLVMX86Info

    LLVMX86CodeGen

    LLVMOrcJIT

    clangBasic
    clangCodeGen
    clangDriver
    clangFrontend
    clangSerialization
)


