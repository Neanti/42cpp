#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : name(n), title(t){
    std::cout << name << ", " << title << " is born !" << std::endl;
    return;
}

std::string Sorcerer::getName() const{
    return name;
}

std::string Sorcerer::getTitle() const{
    return title;
}

Sorcerer::~Sorcerer() {
    std::cout << name << ", " << title << " is dead ! Consequences will never be the same !" << std::endl;
    return;
}

std::ostream & operator<<(std::ostream &output, const Sorcerer &s) {
    output << "I am " << s.getName() << ", " << s.getTitle() << ", and i like ponies !" << std::endl;
    return output;
}

void Sorcerer::polymorph(const Victim &v) const {
    v.getPolymorphed();
    return;
}