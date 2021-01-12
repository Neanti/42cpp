#include "Noob.hpp"

Noob::~Noob() {
    std::cout << "Blob..." << std::endl;
    return;
}

Noob::Noob(std::string n) : Peon(n){
    std::cout << "BliBlop."<< std::endl;
    return;
}

void Noob::getPolymorphed() const {
    std::cout << name << " has been turned into a bigger noob !" << std::endl;
}