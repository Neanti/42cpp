#include "Zombie.hpp"

Zombie::~Zombie() {
    std::cout << "DESTRUCTED :" << this->name << std::endl;
    return;
}

Zombie::Zombie() {
    return;
}

Zombie::Zombie(std::string t, std::string n): type(t), name(n){
    this->advert();
    return;
}

void Zombie::advert() {
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiiiiiinnnnnnsssss ...." << std::endl;
    return;
}