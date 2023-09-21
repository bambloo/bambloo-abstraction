cmake_minimum_required(VERSION 3.24)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(bambloo-abstract)

add_subdirectory(common)
add_subdirectory(mathematics)
add_subdirectory(examples)