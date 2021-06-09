//
// Created by swagger on 2021/5/13.
//

#ifndef C_PLUS_STD_BIND_H
#define C_PLUS_STD_BIND_H

#include <functional>
#include <iostream>
#include <utility>

class Work;

class Timer{
public:
    typedef std::function<void()> Functor;
    Functor cb_;
    Timer(Functor cb):cb_(std::move(cb)){}
    void run() const
    {
        cb_();
    }
};

class Work{
public:
    int fd_;
    Work(int fd):fd_(fd){}
    Timer* timer;
    void close(int fd){
        std::cout << "fd: " << fd << " closed" << std::endl;
    }
};

void test_for_bind(){
    Work work(10);
    Timer timer(std::bind(&Work::close, work, 10));
    timer.run();
}



#endif //C_PLUS_STD_BIND_H
