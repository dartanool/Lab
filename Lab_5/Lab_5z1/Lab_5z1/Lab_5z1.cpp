#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"
using namespace std;

struct Item {
	int ID;
	string login;
	int password;

	void printItem() {

		cout << "ID : " << ID << "\n";

		cout << "Login : " << login << "\n";

		cout << "Password : " << password << "\n";

	}
};


int main()
{
	setlocale(LC_ALL,"");
	WeaponTypes q = WeaponTypes::ONEHAND;
	if (q == WeaponTypes::ONEHAND);
	cout << " Одноручное оружие " << endl;
	
	Item q1;
	q1.ID = 4321;
	q1.login = "qwerty";
	q1.password = 111222333;
	q1.printItem();

	Weapon q2 =("Molotok", 2, 3, 6);
	MagicWeapon q2;
	cout << q2.getDopDamage() << endl;


}

