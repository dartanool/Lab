#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout<< "Введите радиус окружности " << endl;
    float q;
    cin >> q;
    float w = 2 * M_PI * q;
    float e = trunc(w * 1000 + 0.5) / 1000;
    cout << w << endl;
    cout << "Введите произвольну. строку " << endl;
    string r;
    cin >> r;
    fstream qwer;
    qwer.open("D:\\Git_Lab\\Lab_7\\Lab7z3\\a.txt", std::ios::out);
    qwer.close();
}
