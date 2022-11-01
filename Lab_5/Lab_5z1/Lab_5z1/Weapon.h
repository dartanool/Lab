#pragma once
#include <iostream>
using namespace std;
enum class WeaponTypes {
    ONEHAND,
    TWOHAND,
    BOW,
    CROSSBOW,
};
class Weapon
{
    string name;
    float weight;
    float damage;
    float maxWeight;
    WeaponTypes s;
public:
    Weapon();

    Weapon(string name, float weight, float damage, float maxWeight);

    string getName();
    float getWeight();
    float getDamage();
    float getMaxWeight();

    WeaponTypes gets();
    ~Weapon();

    void setDamage(float damage);


    float getmaxW();

    float applyWeapon(Weapon* q);

    float applyWeapon(float weight);
    

};

