//
// Created by swagger on 2021/4/19.
//

#include "const_test.h"



/**
 *
 *
 *
 */
void test_const_1(){

    /* 这两种本质上是一样的 */
    const int x = 10;
    int const y = 20;
    int *p2_x = (int*)&x;
    printf("&x:   %p\n", &x);
    printf("p2_x: %p\n", p2_x);

    *p2_x = 1000;
    printf("const int x = %d\n", x);
    printf("int *p2_x = %d\n", *p2_x);


    int *p2_y = (int*)&y;
    printf("&y:   %p\n", &y);
    printf("p2_y: %p\n", p2_y);

    *p2_x = 1000;
    printf("const int y = %d\n", y);
    printf("int *p2_y = %d\n", *p2_y);

}


void test_const_2(){

    int x = 10;
    int y = 20;
    int *const p1 = &x;
    const int *p2 = &x;
    const int* const p3 = &x;
    x = 1000;
    printf("x =   %d\n", x);
    printf("*p2 = %d\n", *p2);

}

void const_test::test1() const {
    printf("test1() const\n");
}

void const_test::test2() {
    printf("test2()\n");
    test1();
}
