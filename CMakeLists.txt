cmake_minimum_required(VERSION 2.8)

set("${CMAKE_MODULE_PATH}")

project(ACCIDENTALNOISE)
project(ACCIDENTAL_NOISE_EDITOR)

set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

add_subdirectory(src)

add_subdirectory(editor)