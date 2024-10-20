#pragma once
#include <iostream>
using namespace std;
class Weapon
{
private:
    std::string name;
    int damage;
    double weight;
public:
    Weapon(string n, int d, double w);
    Weapon();
    ~Weapon();
    void displayInfo();
    std::string getName() const;
    int getDamage() const;
    double getWeight() const;
    void setDamage(int newDamage);
    bool canLift(double maxWeight);
    double totalWeight(const Weapon& otherWeapon);
    double totalWeight(double otherWeight);
    friend class Characteristic;
};

