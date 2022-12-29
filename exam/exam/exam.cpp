#include <iostream>
#include <string> 
#include "Abstract.h" 
#include "Naslednik.h" 
#include "Classss.h" 
using namespace std; //стандарт библиотека 

struct node {                           
    int key;
    unsigned char height;
    node* left;
    node* right;
    node(int k) { key = k; left = right = 0; height = 1; }
};

void fixheight(node* p) {

    unsigned char hl = height(p->left);
    unsigned char hr = height(p->right);
    p->height = (hl > hr ? hl : hr) + 1;

}
int bfactor(node* p)
{
    return height(p->right) - height(p->left);
}

unsigned char height(node* p)
{
    return p ? p->height : 0;
}



int main()
{

    int q;
    cin >> q;

    Classss* kw = new Classss();
    int c;
    cout << "Количество узлов: ";
    cin >> c;
    int x;
    for (int i = 0; i < c; i++)
    {
        cin >> x;
        kw->insert(kw,x);
    }
}

