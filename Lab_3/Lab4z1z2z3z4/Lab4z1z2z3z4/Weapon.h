#pragma once
#include <iostream>
using namespace std;
class Weapon
{
    string name;
    float weight;
    float damage;
    float maxWeight;
    friend class Characteristic;
public:
    Weapon();

    Weapon(string name, float weight, float damage, float maxWeight);

    string getName();
    float getWeight();
    float getDamage();
    float getMaxWeight();

    ~Weapon();

    void setDamage(float damage);


    float getmaxW();

    float applyWeapon(Weapon* q);

    float applyWeapon(float weight);
};

