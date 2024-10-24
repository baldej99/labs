#include "DisposableWeapon.h"
DisposableWeapon::DisposableWeapon(string name, int damage, double weight, WeaponType type)
    : Weapon(name, damage, weight, type), used(false) {}

DisposableWeapon::DisposableWeapon() : Weapon("Grenade", 100, 0.5, ONEHANDED), used(false) {}
void DisposableWeapon::Attack() {
    if (used) {
        cout << "Оружие уже было использовано" << endl;
    }
    else {
        cout << "Атакуем одноразовым оружием" << endl;
        used = true;  
    }
}
