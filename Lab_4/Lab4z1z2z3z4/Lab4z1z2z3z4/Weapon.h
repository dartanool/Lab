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

    ~Weapon();

    string getName();
    float getWeight();
    float getDamage();
    float getMaxWeight();

    void setDamage(float damage);


    float getmaxW();

    float applyWeapon(float weight);

    float applyWeapon();
};

