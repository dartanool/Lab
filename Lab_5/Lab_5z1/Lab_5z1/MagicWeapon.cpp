#include "MagicWeapon.h"

MagicWeapon::MagicWeapon() : MagicWeapon("Magic weapon not selected", 0, 0, 0, WeaponTypes::ONEHANDED, 0) {};


MagicWeapon::MagicWeapon(string name, int weight, int damage, int maxWeight, WeaponTypes s, int dopDamage) : Weapon(name, weight, damage, maxWeight, s) {
	this->dopDamage = dopDamage;
}
int MagicWeapon::getDopDamage()
{
	return dopDamage;
}
int MagicWeapon::VDamage()
{
	return Weapon::getDamage() + dopDamage;

}