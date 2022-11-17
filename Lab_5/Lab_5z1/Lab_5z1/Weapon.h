#pragma once
#include <iostream>
using namespace std;
enum class WeaponTypes {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW,
};

struct Item {
    int ID;
    string login;
    int password;

    void printItem();
};

class Weapon
{
 protected:
    string name;
    int weight;
    int damage;
    int maxWeight;
    WeaponTypes s;
public:
    Weapon();

    Weapon(string name, int weight, int damage, int maxWeight, WeaponTypes s);

    string getName();
    int getWeight();
    int getDamage();
    int getMaxWeight();

    WeaponTypes gets();
    ~Weapon();

    void setDamage(int damage);


    int getmaxW();

    int applyWeapon(Weapon* q);

    int applyWeapon(int weight);

    virtual int VDamage();
    
    virtual void attack() = 0;

};

