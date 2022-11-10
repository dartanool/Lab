#include "Weapon.h"

Weapon::Weapon()
{
	this->name = name;
	this->weight = weight;
	this->damage = damage;
	this->s = s;
}

Weapon::Weapon(string name, int weight, int damage, int maxWeight, WeaponTypes s) :name(name), weight(weight), damage(damage), maxWeight(maxWeight), s(s) {}

string Weapon::getName()
{
	return this->name;
};

int Weapon::getWeight()
{
	return this->weight;
};

int Weapon::getDamage()
{
	return this->damage;
};

int Weapon::getMaxWeight()
{
	return this->maxWeight;
};


void Weapon::setDamage(int damage)
{
	if (damage > this->damage) this->damage = this->damage;
	else if (damage < 0) cout << "Вы ввели отрицательное число!" << endl;
	else this->damage = damage;
};


WeaponTypes Weapon::gets()
{
	return this->s=s;
}

Weapon::~Weapon()
{
};

int Weapon::getmaxW()
{
	if (maxWeight < weight) {
		return true;
	}
	else {
		return false;
	}
}

int Weapon::applyWeapon(Weapon* q)
{
	return (q->weight + weight);;
}

int Weapon::applyWeapon(int weight)
{
	return (this->weight + weight);
}
int Weapon::VDamage()
{
	return this->damage;
}
void Item::printItem() {
	cout << "id: " << ID << endl << "login: " << login << endl << "password: " << password << endl;
}
