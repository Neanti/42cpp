#include "AWeapon.hpp"

std::string AWeapon::getName() const {
    return name;
}

int AWeapon::getAPCost() const {
    return apcost;
}

int AWeapon::getDamage() const {
    return damage;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : name(name), damage(damage), apcost(apcost){
    return;
}

AWeapon::~AWeapon() {
    return;
}
