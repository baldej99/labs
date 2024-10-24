#pragma once
#include "Weapon.h"
class DisposableWeapon : public Weapon
{
private:
	bool used;
public:
	DisposableWeapon(string name, int damage, double weight, WeaponType type);
	DisposableWeapon();
	void Attack() override;
};

