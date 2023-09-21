cmake_minimum_required(VERSION 3.24)

add_library(bambloo-common STATIC
        sources/secmem.cxx)

target_include_directories(bambloo-common PUBLIC include)

SET_TARGET_PROPERTIES(bambloo-common PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)