//
// Created by swagger on 2021/5/14.
//

#ifndef C_PLUS_KEY_WORD_NULLPTR_H
#define C_PLUS_KEY_WORD_NULLPTR_H



#include <iostream>

void f(int target){
    std::cout << "f(int target)" << std::endl;
}

void f(void* target){
    std::cout << "f(void* target)" << std::endl;
}

template<typename Func, typename Ptr>
void template_func(Func func, Ptr ptr){
    func(ptr);
}

void fun(int *target){
    std::cout << "fun(int *target)" << std::endl;
}

void test_for_nullptr(){

    f(nullptr);
    f(0);
    f(10000);
    template_func(fun, nullptr);


}



#endif //C_PLUS_KEY_WORD_NULLPTR_H
