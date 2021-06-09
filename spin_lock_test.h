//
// Created by swagger on 2021/6/9.
//

#ifndef C_PLUS_SPIN_LOCK_TEST_H
#define C_PLUS_SPIN_LOCK_TEST_H

#include <pthread.h>

struct data{
    pthread_spinlock_t* lock;
    int *flag_;
};


void* entry(void* arg){
    auto da = static_cast<struct data*>(arg);
    for (int i=0; i<10000; i++){
        pthread_spin_lock(da->lock);


    }
}

void spin_lock_test(){
    pthread_spinlock_t lock_;
    pthread_spin_init(&lock_, 0);



}



#endif //C_PLUS_SPIN_LOCK_TEST_H
