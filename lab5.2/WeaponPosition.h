#pragma once
template <typename LeftWeapon, typename RightWeapon>
class WeaponPosition {
private:
    LeftWeapon& leftHand;
    RightWeapon& rightHand;
public:
    WeaponPosition(LeftWeapon& l, RightWeapon& r) : leftHand(l), rightHand(r) {}
    LeftWeapon& getLeftHand() const { return leftHand; }
    RightWeapon& getRightHand() const { return rightHand; }
    void setLeftHand(LeftWeapon left) {
        leftHand = left;
    }
    void setRightHand(RightWeapon right) {
        rightHand = right;
    }
};

