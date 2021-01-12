#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
    return;
}

void RadScorpion::takeDamage(int d) {
    Enemy::takeDamage(d);
    return;
}
