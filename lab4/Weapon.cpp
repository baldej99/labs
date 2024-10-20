#include "Weapon.h"
Weapon::Weapon(string n, int d, double w) : name(n), damage(d), weight(w) {}
Weapon::Weapon():Weapon("Default Weapon", 10, 2.5) {}
Weapon::~Weapon() {
        cout << "Deleting " << name << endl;
}
void Weapon::displayInfo() {
        cout << name << " " << damage << " " << weight << endl;
}
string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

double Weapon::getWeight() const {
    return weight;
}
void Weapon::setDamage(int newDamage) {
    damage = newDamage;
}
bool Weapon::canLift(double maxWeight) {
    return maxWeight >= weight;
}
double Weapon::totalWeight(const Weapon& otherWeapon) {
    return totalWeight(otherWeapon.weight);
}
double Weapon::totalWeight(double otherWeight) {
    return weight + otherWeight;
}