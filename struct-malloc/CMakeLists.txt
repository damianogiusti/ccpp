cmake_minimum_required(VERSION 3.6)
project(struct_malloc)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c main.c)
add_executable(struct_malloc ${SOURCE_FILES})