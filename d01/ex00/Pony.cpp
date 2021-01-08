#include "Pony.hpp"

Pony::Pony() {
    return;
}

Pony::~Pony() {
    std::cout << "Destructor !" << std::endl;
    return;
}

void Pony::setName(std::string s) {
    this->name = s;
    return;
}

void Pony::printName() {
    std::cout << this->name << std::endl;
    return;
}