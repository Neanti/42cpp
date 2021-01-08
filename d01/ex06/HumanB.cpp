#include "HumanB.hpp"

HumanB::HumanB() {
    return;
}

HumanB::HumanB(std::string n) :name(n){

}

HumanB::~HumanB() {
    return;
}

void HumanB::attack() {
    std::cout << this->name
              << " attacks with "
              << this->w->getType()
              << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->w = &weapon;
}