//
// Created by swagger on 2021/4/19.
//

#ifndef C_PLUS_CONST_TEST_H
#define C_PLUS_CONST_TEST_H

#include <iostream>

void test_const_1();

void test_const_2();


class const_test{

public:

    const_test(int x, int y, int z): x(x), y(y), z(z){}

    void test1() const;

    void test2();

public:

    int x;
    int y;
    const int z;

};


#endif //C_PLUS_CONST_TEST_H
