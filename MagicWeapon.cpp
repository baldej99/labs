#include "MagicWeapon.h"
MagicWeapon::MagicWeapon(string weaponName, int weaponDamage, double weaponWeight, WeaponType weaponType, int extra)
    : Weapon(weaponName, weaponDamage, weaponWeight, weaponType), extraDamage(extra) {}
MagicWeapon::MagicWeapon() : Weapon("Magic Wand", 35, 1.5, ONEHANDED), extraDamage(20) {}
int MagicWeapon::getExtraDamage() const {
    return extraDamage;
}


