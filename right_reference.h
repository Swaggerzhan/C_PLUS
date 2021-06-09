//
// Created by swagger on 2021/5/14.
//

#ifndef C_PLUS_RIGHT_REFERENCE_H
#define C_PLUS_RIGHT_REFERENCE_H


#include <cstring>
#include <iostream>
#include <cstdlib>

class String{
public:
    String(char* s){
        this->data_ = new char[strlen(s)];
        strcpy(this->data_, s);
        this->len_ = strlen(s);
        std::cout << "String(char* s)" << std::endl;
    }
    String ():data_(nullptr), len_(0){}

    String (const String& s):data_(nullptr), len_(0){
        delete data_;
        this->data_ = new char[s.len_];
        strcpy(this->data_, s.data_);
        this->len_ = s.len_;
        std::cout << "&" << std::endl;
    }
    String (String&& s){
        this->data_ = s.data_;
        this->len_ = s.len_;
        s.data_ = nullptr;
        std::cout << "&&" << std::endl;
    }

public:
    char *data_;
    int len_;
};

void test_for_R_reference(){
    char s[] = "123";
    String s1(s);
    String s2;
    String s3(s1);
    String s4(std::move(s3));
    std::cout << "s1: " << s1.data_ << std::endl;
    std::cout << "s4: " << s4.data_ << std::endl;
    std::cout << "s3: " << s3.data_ << std::endl;


}



#endif //C_PLUS_RIGHT_REFERENCE_H
