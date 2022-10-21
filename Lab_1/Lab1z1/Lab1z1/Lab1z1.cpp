
#include <iostream>> //Подкючает библиотеку input-output stream для вывода и ввода в консоль
#include <Windows.h>
//#include <Windows.h>
using namespace std;

int main() //Главная функция с типом integer 
{ // Фигурными скобками выделяется тело функции 
    setlocale(LC_ALL, ""); // Вывод в консоль русского языка
    cout << "First string" << endl;
    cout << "Первая строка" << endl << "Вторая строка" << endl;
    cout << "Спецсимволы  \" \\ \" " << endl;

}
