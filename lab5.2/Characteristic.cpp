#include "Characteristic.h"
Characteristic::Characteristic(int strengthValue) : strength(strengthValue) {}
int Characteristic::getDamage(const Weapon& weapon) const {
    return strength + weapon.damage;
}
