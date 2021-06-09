cmake_minimum_required(VERSION 2.8)
project(C_PLUS)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_PLUS
        const/const_test.h
        const/const_test.cpp

        main.cpp std_bind.h key_word_nullptr.h right_reference.h const/copy_construct.h voidType.h 3_findRepeatNumber.h Offer/4_findNumberIn2DArray.h cast/cast_four.h spin_lock_test.h)