# SPDX-FileCopyrightText: 2024 Noodle Contributors
#
# SPDX-License-Identifier: GPL-3.0-or-later

add_executable(noodle_backend main.cpp)

configure_file(core/noodle_version.hh.in core/noodle_version.hh @ONLY)

target_include_directories(noodle_backend PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(noodle_backend PUBLIC ${CMAKE_SOURCE_DIR})

install(PROGRAMS
    $<TARGET_FILE:noodle_backend>
    DESTINATION ${CMAKE_INSTALL_PREFIX})

if(BUILD_TESTING)
  add_test(TestNoodle ${CMAKE_CTEST_COMMAND}
    --build-and-test "${CMAKE_SOURCE_DIR}"
                      "${CMAKE_BINARY_DIR}"
    --build-generator ${CMAKE_GENERATOR}
    --build-makeprogram ${CMAKE_MAKE_PROGRAM}
    --build-project noodle
    --build-exe-dir ${EXECUTABLE_OUTPUT_PATH}
    --test-command noodle_backend)
endif()
