#include "Peon.hpp"

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon::Peon(std::string n) : Victim(n){
    std::cout << "Zog zog."<< std::endl;
    return;
}

void Peon::getPolymorphed() const {
    std::cout << name << " has been turned into a pink pony !" << std::endl;
}