#include "PowerFist.hpp"

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return;
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
    return;
}

PowerFist::~PowerFist() {
    return;
}