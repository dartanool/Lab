#pragma once
#include "Abstract.h"
#include <vector>
class Naslednik : public Abstract
{
public:
    node* rotateright(node* p);
    node* rotateleft(node* q);
    node* balance(node* p);
};

