// Lab_1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_ALL, "");
    int a = 50;
    float b = 15.933;
    short c = 250;
    int d_1 = 5;
    string d_2 = "November";
    int d_3 = 2003;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Моя дата рождения: " << d_1 << " " << d_2 << " " << d_3 << " года" << endl;

    float s1 = 2.3;
    string s2 = "WINDOWS";
    cout << s1 << " " << s2 << endl;
}

