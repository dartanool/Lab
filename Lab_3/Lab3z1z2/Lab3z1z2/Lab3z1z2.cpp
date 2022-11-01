// 3 Лабораторная работа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
using std::endl;


int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int printArray(int* begin, int* end) {
    int sum = 0;
    for (int* p = begin; p < end; p++) {
        sum += *p;
    }
    return sum;
}

void (*fun(char bn))
{
    if (bn == '+')
        return sum;
    if (bn == '-')
        return sub;
}


int main()
{
    setlocale(LC_ALL, "");
    //ЗАДАНИЕ 1
    cout << "ЗАДАНИЕ 1 " << endl;
    int* b;
    int a = 10;
    b = &a;
    cout << " Адрес Указателя = " << *b << endl;
    *b += 2;
    cout << " Измененное значение Указателя = " << *b << endl;
    cout << "a = " << a << endl;
    int Arr[] = { 1,2,3,4 };
    for (int i = 0; i < 4; i++) {

        std::cout << *(Arr + i) << "\n";

    }
    int k = 56;
    int* const d = &k;
    cout << "До изменения  = " << k << endl;
    *d = 3;
    cout << "После изменения = " << k << endl;

    //ЗАДАНИЕ 2
    cout << "ЗАДАНИЕ 2 " << endl;
    int A[] = { 5, 6, 7, 8, 9, 10 };
    int* begin = std::begin(A);
    int* end = std::end(A);
    cout << "Сумма элементов массива  = ";
    cout << printArray(begin, end) << endl;
    cout << "Если значение bn совпадаетс с + : " << fun('+') << endl;


    float* pc1 = new float(314.21);
    cout << *pc1 << endl;
    delete pc1;



}