#pragma once
#include "Abstract.h"
#include "Naslednik.h"
#include "exam.cpp"
class Classss : public Naslednik
{
public:
    node* insert(node* p, int k);
    node* removemin(node* p);
    node* findmin(node* p);
    node* remove(node* p, int k);
};



