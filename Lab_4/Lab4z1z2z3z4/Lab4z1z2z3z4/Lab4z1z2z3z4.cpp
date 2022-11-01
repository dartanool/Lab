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
    
    Weapon q = Weapon("Pistolet", 1, 43,6);
    cout << "Проверка на допустимый максимальный вес = " << q.getmaxW() << endl;
    Weapon m = Weapon("Molot", 2, 6,5);/*
    cout <<"Оружие = " << m.name  << ", Вес = "<<  m.weight << ", Урон = " << m.damage << endl;
    Weapon n = Weapon("NOZH", 5, 3, 7);
    cout << "Оружие = " << n.name << ", Вес = " << n.weight << ", Урон = " << n.damage << endl;

    if (true) {
        Weapon* g = new Weapon("Granata", 1, 34,9);
        cout << "Оружие = " << g->name << ", Вес = " << g->weight << ", Урон = " << g->damage << endl;
        delete g;
    }
*/
    float daaaa = m.getWeight();
    cout << "Суммарный вес = " << q.applyWeapon(daaaa) << endl;
    cout << "Суммарный вес = " << q.applyWeapon() << endl;
    Weapon q2 = Weapon("Pistolet", 1, 43, 6);
    cout << "Name:" << q2.getName() << " Damage:" << q2.getDamage() << " Weight: " << q2.getWeight() << " MaxWeight: " << q2.getMaxWeight() << endl;

    //Summa power and damage
    q2.setDamage(-3);
    cout << q2.getDamage() << endl;

    Characteristic b = Characteristic(5);
    b.getDamage(&q2);
    cout << b.getDamage(&q2) << endl;

    int a = 4;
    int d = 2;
    cout << "Add = " << MyMath::add(a, d) << endl;
    cout << "Sab = " << MyMath::sab(a, d) << endl;
    cout << "Mult = " << MyMath::mult(a, d) << endl;
    cout << "Div = " << MyMath::div(a, d) << endl;
        
    cout << "Значение статической переменной = " << MyMath::callsCount << endl;

}


