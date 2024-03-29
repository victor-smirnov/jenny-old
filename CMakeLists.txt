
# Copyright 2020 Victor Smirnov
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required (VERSION 3.6)
project (Jenny)

set(VERSION "0.1.0")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Jenny.cmake)

set (JENNY_API_CXX_STANDARD 14)
set (JENNY_INTERNAL_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD ${JENNY_API_CXX_STANDARD})

if (NOT CMAKE_BUILD_TYPE)
     set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build." FORCE)
endif()


IF(CMAKE_BUILD_TYPE STREQUAL "Debug")
    option(USE_ASAN "Compile with Address Sanitizer ON (Default with Debug build)" OFF)
else()
    option(USE_ASAN "Compile with Address Sanitizer ON (Default with Debug build)" OFF)
ENDIF()

option(USE_TSAN "Compile with Thread Sanitizer ON" OFF)
option(USE_USAN "Compile with UB Sanitizer ON (Default with Debug build)" OFF)

set (LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set (BUILD_POSIX  FALSE)
set (BUILD_MSVC   FALSE)
set (BUILD_MACOSX FALSE)

if(APPLE)
    set (BUILD_MACOSX TRUE)
    set (BUILD_POSIX  TRUE)
elseif (UNIX)
    set (BUILD_POSIX  TRUE)
elseif(MSVC)
    set (BUILD_MSVC   TRUE)
else()
    message(FATAL_ERROR "This platform is not explicitly supported")
endif()

# Global definitions

add_definitions(-DBOOST_CONFIG_SUPPRESS_OUTDATED_MESSAGE)
add_definitions(-DMMA_ICU_CXX_NS=icu)

if (BUILD_POSIX)

    add_definitions(-Wall -Wno-sign-compare -fPIC -DPIC -D_GNU_SOURCE -D_REENTRANT -Wno-unused-command-line-argument)
    add_definitions(-Wno-old-style-cast)

    add_definitions(-fstrict-aliasing -Wstrict-aliasing=2 -Wfatal-errors  -ftemplate-backtrace-limit=0)
    add_definitions(-Wno-comment -Wno-unknown-warning-option -Wunused-variable)
    add_definitions(-Wno-unused-function -Wno-unused-but-set-variable)
    add_definitions(-Wno-unused-private-field -Wno-pessimizing-move)
    add_definitions(-Wno-missing-braces)
    add_definitions(-Wno-variables)
    add_definitions(-Werror=unused-result)
    add_definitions(-faligned-new)
    add_definitions(-Wno-class-memaccess)
    add_definitions(-Werror=return-type)
    
    add_definitions(-pthread)
    
    if (USE_ASAN)
        add_definitions(-fsanitize=address -DJENNY_USE_ASAN -DJENNY_USE_UCONTEXT)
        add_global_linker(-fsanitize=address)
    endif()
    
    if (USE_USAN) 
        add_definitions(-fsanitize=undefined)
        add_global_linker(-fsanitize=undefined)
    endif()
    
    if (USE_TSAN) 
        add_definitions(-fsanitize=thread)
        add_global_linker(-fsanitize=thread)
    endif()
    
    add_global_libs(dl pthread)

    if (BUILD_STATIC)
        add_definitions(-static)
        add_global_linker(-static) #-static-libgcc -static-libstdc++
    endif()
else()
    add_definitions(/W3 /Zc:__cplusplus -DWIN32_LEAN_AND_MEAN -D_CRT_SECURE_NO_WARNINGS)
    add_definitions(-D_REENTRANT)
    add_definitions(-DDLLEXPORT -DNOMINMAX /bigobj)
endif()


set (Boost_USE_DEBUG_LIBS	 ON)
set (Boost_USE_RELEASE_LIBS	 ON)
set (Boost_USE_DEBUG_RUNTIME	 ON)
set (Boost_USE_MULTITHREADED     ON)

if (MSVC)
    set (Boost_USE_STATIC_RUNTIME    ON)
    set (Boost_USE_STATIC_LIBS       ON)
    find_package(ICU 60.2 COMPONENTS dt i18n uc REQUIRED)
    link_libraries(ICU::dt ICU::uc ICU::i18n)

else()
    set (Boost_USE_STATIC_RUNTIME    ${BUILD_WITH_STATIC_BOOST})
    set (Boost_USE_STATIC_LIBS       ${BUILD_WITH_STATIC_BOOST})
    find_package(ICU 60.2 COMPONENTS i18n uc data REQUIRED)
    link_libraries(ICU::i18n ICU::uc ICU::data)
endif()

find_package(Boost 1.71.0 COMPONENTS context program_options serialization unit_test_framework REQUIRED)

if (MSVC)
    link_libraries(Boost::program_options Boost::serialization Boost::unit_test_framework)
endif()

include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})
link_libraries(Boost::program_options Boost::serialization)

include_directories(${ICU_INCLUDE_DIRS})
link_directories(${ICU_LIBRARY_DIRS})

find_package(absl CONFIG REQUIRED)
link_libraries(absl::base absl::strings absl::hash absl::meta absl::time)

find_package(fmt CONFIG REQUIRED)
link_libraries(fmt::fmt fmt::fmt-header-only)

find_package(Clang CONFIG REQUIRED)
find_package(LLVM CONFIG REQUIRED)


set_property (GLOBAL PROPERTY GLOBAL_SOURCES)



add_subdirectory(src)
