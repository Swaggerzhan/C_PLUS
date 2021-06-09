//
// Created by swagger on 2021/6/9.
//

#ifndef C_PLUS_CAST_FOUR_H
#define C_PLUS_CAST_FOUR_H

#include <iostream>

using std::cout;
using std::endl;

class A{
public:
    virtual void show(){
        cout << "A->show()" << endl;
    }
};
class B: public A{
public:
    void show(){
        cout << "B->show()" << endl;
    }
};
class C: public A{
public:
    void show(){
        cout << "C->show()" << endl;
    }
};
class D: public B, C{
public:
    virtual void show(){
        cout << "D->show()" << endl;
    }
};

void test(){

    D* d = new D();
    B* bp = dynamic_cast<B*>(d);
    A* ap = dynamic_cast<A*>(bp);
    ap->show();





}







#endif //C_PLUS_CAST_FOUR_H
