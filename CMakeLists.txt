cmake_minimum_required(VERSION 3.5.1)
project(RefactoringKata)

set (CMAKE_CXX_STANDARD 14)

link_directories(${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/tests/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/txt_files"
                     "${CMAKE_CURRENT_SOURCE_DIR}/CI"
                     "/usr/include")

file (GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
                   "${CMAKE_CURRENT_SOURCE_DIR}/tests/include/*.h")

file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp"
                   "${CMAKE_CURRENT_SOURCE_DIR}/tests/src/*.cpp")

file (GLOB MISC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/txt_files/*.txt"
                      "${CMAKE_CURRENT_SOURCE_DIR}/travis/*.sh")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${MISC_FILES})
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
add_test(${PROJECT_NAME} ${PROJECT_NAME})
