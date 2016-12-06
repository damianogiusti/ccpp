cmake_minimum_required(VERSION 3.6)
project(camping)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    camping_group.c
    camping_group.h
        camping_main.c
        camping_main.h
    main_menu.c
    main_menu.h
    pricing_policy.c
    pricing_policy.h
    structs.h)

add_executable(camping ${SOURCE_FILES})