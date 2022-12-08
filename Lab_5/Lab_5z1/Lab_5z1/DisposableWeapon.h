#pragma once
#include "Weapon.h"
class DisposableWeapon :
    public Weapon
{
private:
    bool poleFlag;

public:
    DisposableWeapon();
    DisposableWeapon(string name, int weight, int damage, int maxWeight, WeaponTypes s);

public:
    // #7
    void attack();
};

