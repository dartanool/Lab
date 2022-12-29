#include "Classss.h"
node* Classss::insert(node* p, int k) // ������� ����� k � ������ � ������ p
{
if (!p) return new node(k);
if (k < p->key)
    p->left = insert(p->left, k);
else
p->right = insert(p->right, k);
return balance(p);
}

node* Classss::removemin(node* p) // �������� ���� � ����������� ������ �� ������ p
{
    if (p->left == 0)
        return p->right;
    p->left = removemin(p->left);
    return balance(p);
}

node* Classss::findmin(node* p) // ����� ���� � ����������� ������ � ������ p
{
    return p->left ? findmin(p->left) : p;
}

node* Classss::remove(node* p, int k) // �������� ����� k �� ������ p
{
    if (!p) return 0;
    if (k < p->key)
        p->left = remove(p->left, k);
    else if (k > p->key)
        p->right = remove(p->right, k);
    else //  k == p->key
    {
        node* q = p->left;
        node* r = p->right;
        delete p;
        if (!r) return q;
        node* min = findmin(r);
        min->right = removemin(r);
        min->left = q;
        return balance(min);
    }
    return balance(p);
}


