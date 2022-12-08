#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"
#include "DisposableWeapon.h"
using namespace std;

/*
bool operator > (Weapon a, Weapon b);
bool operator > (Weapon a, Weapon b);

bool operator > (Weapon a, Weapon b)
{
	return a.getDamage() > b.getDamage();
}
bool operator < (Weapon a, Weapon b)
{
	return a.getDamage() < b.getDamage();
}
*/

int main()
{
	setlocale(LC_ALL,"");
	/*
	WeaponTypes q = WeaponTypes::ONEHANDED;
	if (q == WeaponTypes::ONEHANDED)
	cout << " Одноручное оружие " << endl;
	
	Item q1;
	q1.ID = 4321;
	q1.login = "qwerty";
	q1.password = 111222333;
	q1.printItem();
	cout << endl;

	MagicWeapon q2("hfjdk",2,1,3,WeaponTypes::ONEHANDED,3);
	cout << "Сумма доп урона и урона: " << q2.VDamage() << endl;

	Weapon Weap1("Strela", 1, 2, 3, WeaponTypes::ONEHANDED);
	Weapon Weap2("Nakonechnik", 7, 4, 2, WeaponTypes::ONEHANDED);
	cout <<(Weap1 > Weap2) << endl;
	cout <<(Weap1 < Weap2) << endl;
	*/
	MagicWeapon po(" Strela", 1, 2, 3, WeaponTypes::ONEHANDED,5);
	MagicWeapon lo(" Nakonechnik", 7, 4, 2, WeaponTypes::ONEHANDED,6);
	po.attack();
	lo.attack();

	DisposableWeapon wer("nozh",3, 15, 5, WeaponTypes::ONEHANDED);
	cout << wer.getDamage() << endl;
	wer.attack();
	wer.attack();


}

