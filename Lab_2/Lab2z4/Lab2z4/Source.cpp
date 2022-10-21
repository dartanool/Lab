#include <iostream>
using  std::endl;
using  std::cout;
using  std::cin;
namespace CoolG
{
    int tst(int y) {
        static int x = 0;
        int p = x + y;
        x = y;
        return p;
    }
}