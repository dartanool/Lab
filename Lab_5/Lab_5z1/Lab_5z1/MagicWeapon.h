#pragma once
#include "Weapon.h"
class MagicWeapon :
    public Weapon
{
    float dopDamage;
public:
    MagicWeapon();
    MagicWeapon(float dopDamage);
    float getDopDamage();

};

