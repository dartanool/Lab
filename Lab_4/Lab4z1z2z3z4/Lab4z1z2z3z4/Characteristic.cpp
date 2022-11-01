#include "Characteristic.h"

Characteristic::Characteristic(int power) : power(power) {};

int Characteristic::getDamage(Weapon* a)
{
	return a->damage + this->power;
}
