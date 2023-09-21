cmake_minimum_required(VERSION 3.24)

add_library(bambloo-mathematics SHARED
    sources/integer.cxx
    sources/number.cxx
    )

target_link_libraries(bambloo-mathematics bambloo-common)
target_include_directories(bambloo-mathematics PUBLIC include)

SET_TARGET_PROPERTIES(bambloo-mathematics PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)