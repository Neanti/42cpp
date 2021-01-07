#include "Weapon.hpp"

Weapon::Weapon() {
    return;
}

Weapon::Weapon(std::string t) :type(t){

}

Weapon::~Weapon() {
    return;
}

void Weapon::setType(std::string t) {
    this->type = t;
    return;
}

const std::string & Weapon::getType() {
    //ou ref
    return this->type;
}