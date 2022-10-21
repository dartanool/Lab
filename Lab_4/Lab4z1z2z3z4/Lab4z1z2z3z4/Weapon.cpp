#include "Weapon.h"

Weapon::Weapon()
{
	this->name = name;
	this->weight = weight;
	this->damage = damage;
}

Weapon::Weapon(string name, float weight, float damage, float maxWeight) :name(name), weight(weight), damage(damage), maxWeight(maxWeight) {}

string Weapon::getName()
{
	return this->name;
};

float Weapon::getWeight()
{
	return this->weight;
};

float Weapon::getDamage()
{
	return this->damage;
};

float Weapon::getMaxWeight()
{
	return this->maxWeight;
};


void Weapon::setDamage(float damage)
{
	if (damage > this->damage) this->damage = this->damage;
	else if (damage < 0) cout << "Вы ввели отрицательное число!" << endl;
	else this->damage = damage;
};


Weapon::~Weapon()
{
};

float Weapon::getmaxW()
{
	if (maxWeight < weight) {
		return true;
	}
	else {
		return false;
	}
}

float Weapon::applyWeapon(Weapon* q)
{
	return (q->weight + weight);;
}

float Weapon::applyWeapon(float weight)
{
	return (this->weight + weight);
}
