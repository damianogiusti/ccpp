cmake_minimum_required(VERSION 3.6)
project(Bank_Account)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c main.h)
add_executable(Bank_Account ${SOURCE_FILES})