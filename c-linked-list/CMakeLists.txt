cmake_minimum_required(VERSION 3.6)
project(c_linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c linkedlist.c linkedlist.h)
add_executable(c_linked_list ${SOURCE_FILES})