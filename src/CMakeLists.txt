
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

include_directories(../include)
include_directories(parser)

add_subdirectory(parser)

get_property(GLOBAL_SRCS GLOBAL PROPERTY GLOBAL_SOURCES)



get_property(GLOBAL_SRCS_CLASSIC GLOBAL PROPERTY GLOBAL_SOURCES_CLASSIC)
add_library(JennyClassic STATIC ${GLOBAL_SRCS_CLASSIC})
set_property(TARGET JennyClassic PROPERTY CXX_STANDARD ${JENNY_INTERNAL_CXX_STANDARD})

SET_TARGET_PROPERTIES(JennyClassic PROPERTIES COMPILE_FLAGS "${JENNY_COMPILE_FLAGS} -DJENNY_SRC=${CMAKE_SOURCE_DIR} -DMMA1_NO_REACTOR")
SET_TARGET_PROPERTIES(JennyClassic PROPERTIES LINK_FLAGS "${JENNY_LINK_FLAGS}")

export(TARGETS JennyClassic FILE ${LIBRARY_OUTPUT_PATH}/JennyClassic.cmake)



