#pragma once
#include "exam.cpp"
class Abstract
{
public:
    virtual node* rotateright(node* p) = 0;
    virtual node* rotateleft(node* q) = 0;
    virtual node* balance(node* p) = 0;
};

