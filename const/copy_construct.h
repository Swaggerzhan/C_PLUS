//
// Created by swagger on 2021/6/7.
//

#ifndef C_PLUS_COPY_CONSTRUCT_H
#define C_PLUS_COPY_CONSTRUCT_H



class Test{
public:

    Test(int x)
    :   x_(x)
    {}
    Test()
    : x_(0){}

    ~Test(){}

    Test (const Test& t){
        this->x_ = t.x_;
    }

    int show(){ return x_; }

    static int show(const Test& t){
        return t.x_;
    }

    void setX(int x){
        x_ = x;
    }

private:
    int x_;
};


#endif //C_PLUS_COPY_CONSTRUCT_H
