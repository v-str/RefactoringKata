cmake_minimum_required(VERSION 3.0)
project(RefactoringKata)

set (CMAKE_CXX_STANDARD 14)

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/sources"
                     "${CMAKE_CURRENT_SOURCE_DIR}/txt_files")

file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp")
file (GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/sources/*.h")
file (GLOB TXT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/txt_files/*.txt")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${TXT_FILE})
