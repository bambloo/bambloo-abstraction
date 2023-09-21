cmake_minimum_required(VERSION 3.24)

add_executable(mathematics-example sources/main.cxx)

target_link_libraries(mathematics-example bambloo-mathematics)

SET_TARGET_PROPERTIES(mathematics-example PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)