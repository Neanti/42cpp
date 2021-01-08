#include "Zombie.hpp"

Zombie::~Zombie() {
    std::cout << "DESTRUCTED :" << this->name << std::endl;
    return;
}

Zombie::Zombie() {
    return;
}

Zombie::Zombie(std::string t, std::string n): type(t), name(n){
    this->announce();
    return;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiiiiiinnnnnnsssss ...." << std::endl;
    return;
}

void Zombie::setTypeName(std::string t, std::string n) {
    this->type = t;
    this->name = n;
}