cmake_minimum_required(VERSION 3.5.1)
project(RefactoringKata)

set (CMAKE_CXX_STANDARD 14)

link_directories(${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

add_subdirectory(googletest)

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/tests"
                     "${CMAKE_CURRENT_SOURCE_DIR}/txt_files")

file (GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")

file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp"
                   "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp")


file (GLOB TXT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/txt_files/*.txt")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${TXT_FILE})
target_link_libraries(${PROJECT_NAME} gtest_main gtest)
