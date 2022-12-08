#include "DisposableWeapon.h"

DisposableWeapon::DisposableWeapon() : Weapon(), poleFlag(false) {}

DisposableWeapon::DisposableWeapon(string name, int weight, int damage, int maxWeight, WeaponTypes s) : Weapon(name, weight,damage, maxWeight, s), poleFlag(false) {}

void DisposableWeapon::attack()
{
    if (this->poleFlag) {
        cout << "Оружие уже было использовано" << endl;
    }
    else {
        this->poleFlag = true;

        cout << "Атакуем одноразовым оружием" << endl;
    }
}
