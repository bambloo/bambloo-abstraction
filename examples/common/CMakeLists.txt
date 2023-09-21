cmake_minimum_required(VERSION 3.24)

add_executable(common-example sources/main.cxx)

target_link_libraries(common-example 
    bambloo-common)

SET_TARGET_PROPERTIES(common-example PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)