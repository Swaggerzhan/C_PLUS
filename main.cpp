#include <iostream>
#include "const/const_test.h"



int main() {


    //test_const_2();
    //test_const_1();

    const_test t1(10, 20 ,30);
    t1.test1();
    t1.test2();
    const const_test t2(10, 20, 30);
    t2.test1();

    const const_test* t3 = new const_test(10, 20, 30);
    t3->test1();

    const_test* const t4 = new const_test(10, 20, 30);
    t4->test2();
}

