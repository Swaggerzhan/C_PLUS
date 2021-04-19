cmake_minimum_required(VERSION 3.5)
project(C_PLUS)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_PLUS
        const/const_test.h
        const/const_test.cpp

        main.cpp)