cmake_minimum_required(VERSION 3.6)
project(esercitazioniC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es1.c es2.c es3.c es4.c es6.c es7.c es5.c es8.c)
add_executable(esercitazioniC ${SOURCE_FILES})