// Lab_4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Weapon.h"
#include "Characteristic.h"
#include "MyMath.h"

using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    /*
    Weapon q = Weapon("Pistolet", 1, 43,6);
    cout << "Проверка на допустимый максимальный вес = " << q.getmaxW() << endl;
    Weapon m = Weapon("Molot", 2, 6,5);
    cout <<"Оружие = " << m.name  << ", Вес = "<<  m.weight << ", Урон = " << m.damage << endl;
    Weapon n = Weapon("NOZH", 5, 3, 7);
    cout << "Оружие = " << n.name << ", Вес = " << n.weight << ", Урон = " << n.damage << endl;

    if (true) {
        Weapon* g = new Weapon("Granata", 1, 34,9);
        cout << "Оружие = " << g->name << ", Вес = " << g->weight << ", Урон = " << g->damage << endl;
        delete g;
    }

    float daaaa = m.weight;
    cout << "Суммарный вес = " << q.applyWeapon(&m) << endl;
    cout << "Суммарный вес = " << q.applyWeapon(daaaa) << endl;*/
    Weapon q = Weapon("Pistolet", 1, 43, 6);
    cout << "Name:" << q.getName() << " Damage:" << q.getDamage() << " Weight: " << q.getWeight() << " MaxWeight: " << q.getMaxWeight() << endl;

    //Summa power and damage
    q.setDamage(-3);
    cout << q.getDamage() << endl;

    Characteristic b = Characteristic(5);
    b.getDamage(&q);
    cout << b.getDamage(&q) << endl;

    int a = 4;
    int d = 2;
    cout << "Add = " << MyMath::add(a, d) << endl;
    cout << "Sab = " << MyMath::sab(a, d) << endl;
    cout << "Mult = " << MyMath::mult(a, d) << endl;
    cout << "Div = " << MyMath::div(a, d) << endl;



}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
