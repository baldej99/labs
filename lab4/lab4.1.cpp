#include <iostream>
#include <string>
#include "Weapon.h"
#include "Characteristic.h"
#include "MyMath.h"
using namespace std;
int main() {
    Weapon sword("Sword", 50, 3.5);//4.1
    Weapon* axe = new Weapon();
    sword.displayInfo();
    axe->displayInfo();
    cout << sword.getName() << endl;//4.4
    cout << sword.getDamage() << endl;
    cout << sword.getWeight() << endl;
    sword.setDamage(60);
    cout << "updated damage is " << sword.getDamage() << endl;
    Characteristic char1(30);
    cout << "Total damage is " << char1.getDamage(sword) << endl;
    cout << MyMath::add(3, 2) << endl;
    cout << MyMath::sub(5, 3) << endl;
    cout << MyMath::mult(4, 2) << endl;
    cout << MyMath::div(10, 2) << endl;
    cout << "Total calls " << MyMath::callCount << endl;

    double maxWeight = 4.0;//4.2
    cout << sword.canLift(maxWeight) << endl;
    cout << axe->canLift(maxWeight) << endl;
    cout << "total weight is " << sword.totalWeight(*axe) << endl;
    cout << "total weight is " << sword.totalWeight(1.0) << endl;
    delete axe;
    return 0;
}
