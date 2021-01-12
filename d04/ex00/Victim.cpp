#include "Victim.hpp"

Victim::Victim(std::string n) : name(n){
    std::cout << "Some random victim called " << name << " just appeared !" << std::endl;
    return;
}

std::string Victim::getName() const{
    return name;
}

Victim::~Victim() {
    std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
    return;
}

std::ostream & operator<<(std::ostream &output, const Victim &s) {
    output << "I am " << s.getName() << ", and i like otters !" << std::endl;
    return output;
}

void Victim::getPolymorphed() const {
    std::cout << name << " has been turned into a cute little sheep !" << std::endl;
    return;
}