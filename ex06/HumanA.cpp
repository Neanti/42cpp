#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &weapon) : w(weapon), name(n){

}

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << this->name
    << " attacks with "
    << this->w.getType()
    << std::endl;
    return;
}