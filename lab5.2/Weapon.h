#pragma once
#include <iostream>
using namespace std;
enum WeaponType { ONEHANDED, TWOHANDED, BOW, CROSSBOW };
class Weapon
{
protected:
    std::string name;
    int damage;
    double weight;
    WeaponType type;
public:
    Weapon(string n, int d, double w, WeaponType weaponType);
    Weapon();
    ~Weapon();
    void displayInfo();
    std::string getName() const;
    int getDamage() const;
    double getWeight() const;
    WeaponType getType() const;
    void setDamage(int newDamage);
    bool canLift(double maxWeight);
    double totalWeight(const Weapon& otherWeapon);
    double totalWeight(double otherWeight);
    virtual void Attack() = 0;
    friend class Characteristic;
};

