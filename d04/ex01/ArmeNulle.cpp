#include "ArmeNulle.hpp"

void ArmeNulle::attack() const {
    std::cout << "* zzzzzzzzzzzzzz *" << std::endl;
    return;
}

ArmeNulle::ArmeNulle() : AWeapon("Arme Nulle", 2, 8){
    return;
}

ArmeNulle::~ArmeNulle() {
    return;
}