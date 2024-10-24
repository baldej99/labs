#pragma once
#include "Weapon.h"
class MagicWeapon : public Weapon {
private:
    int extraDamage; 

public:
    MagicWeapon(string weaponName, int weaponDamage, double weaponWeight, WeaponType weaponType, int extra);
    MagicWeapon();
    int getExtraDamage() const;
};


