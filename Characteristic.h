#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;
class Characteristic
{
private:
    int strength;

public:
    Characteristic(int strengthValue);
    int getDamage(const Weapon& weapon) const;
};

