#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
    return;
}

void SuperMutant::takeDamage(int d) {
    d -= 3;
    Enemy::takeDamage(d);
    return;
}
