#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void read()
{
    fstream qwer("a.txt");
    string line;
    while (getline(qwer, line)) cout << line  << '\n';
    qwer.close();
}

void erase()
{
    fstream qwer;
    qwer.open("a.txt", fstream::out | fstream::trunc);
    qwer.close();
}

void write(string& asd)
{
    fstream qwer;
    qwer.open("a.txt", ios::app);
    qwer<< asd << '\n';
    qwer.close();
}

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
    string asd;
    cin >> asd;
    fstream qwer;

    string qwe;
    qwer.open("a.txt", ios::in);
    qwer >> qwe;
    cout << qwe << endl;
    qwer.close();
    /*    qwer.open("a.txt", ios::in);
    string data;
    string line;
    while (getline(qwer, line)) {

        data += line + "\n";

    }
    qwer << q<< endl;
    cout << data << endl;
    qwer.close();*/

    
    while (true) {
        if (asd == "exit") break;
        else if (asd == "read") read();
        else if (asd == "erase") erase();
        else write(asd);
    }
}
