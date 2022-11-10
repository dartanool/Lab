#pragma once
#include "Weapon.h"
class MagicWeapon :
    public Weapon
{
    int dopDamage;
public:
    MagicWeapon();
    MagicWeapon(string name, int weight, int damage, int maxWeight, WeaponTypes s, int dopDamage);
    int getDopDamage();

    int VDamage() override ;


};

