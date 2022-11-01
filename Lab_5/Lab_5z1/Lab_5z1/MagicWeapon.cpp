#include "MagicWeapon.h"

MagicWeapon::MagicWeapon()
{
	this->dopDamage = dopDamage;
}

MagicWeapon::MagicWeapon(float dopDamage): dopDamage(dopDamage){}

float MagicWeapon::getDopDamage()
{
	return this->dopDamage;
}
