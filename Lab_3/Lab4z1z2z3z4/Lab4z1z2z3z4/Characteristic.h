#pragma once
#include "Weapon.h"

class Characteristic
{
public:
	int power;
	Characteristic(int power);

	int getDamage(Weapon* a);

};

