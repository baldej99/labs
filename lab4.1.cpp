#include <iostream>
#include <string>
#include "Weapon.h"
#include "Characteristic.h"
#include "MyMath.h"
#include "MagicWeapon.h"
using namespace std;
struct Player {
    int id;
    string login;
    string password;
    void print() const {
        cout << "ID: " << id << endl;
        cout << "Login: " << login << endl;
        cout << "Password: " << password << endl;
    }
};
int main() {
    setlocale(LC_ALL, "RU");
    Weapon sword("Sword", 50, 3.5, TWOHANDED);//4.1
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
    if (sword.getType() == ONEHANDED) { //5
        std::cout << "Одноручное оружие" << std::endl;
    }
    else if (sword.getType() == TWOHANDED) {
        std::cout << "Двуручное оружие" << std::endl;
    }
    else if (sword.getType() == BOW) {
        std::cout << "Лук" << std::endl;
    }
    else if (sword.getType() == CROSSBOW) {
        std::cout << "Арбалет" << std::endl;
    }
    Player player1 = { 1, "player1", "goida228" };
    player1.print();
    MagicWeapon magicStaff("Magic Staff", 70, 5.0, TWOHANDED, 30);
    MagicWeapon magicWand;
    cout << magicStaff.getName() << "'s extra damage: " << magicStaff.getExtraDamage() << endl;
    cout << magicWand.getName() << "'s extra damage: " << magicWand.getExtraDamage() << endl;
    delete axe;
    return 0;
}
