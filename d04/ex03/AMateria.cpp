#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type){
    return;
}

const std::string & AMateria::getType() const {
    return type;
}

unsigned int AMateria::getXP() const {
    return _xp;
}

void AMateria::use(ICharacter &target) {
    if(type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else if (type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    _xp += 10;
    return;
}

AMateria::~AMateria() {
    return;
}

AMateria::AMateria() {
    return;
}

void AMateria::setXP(unsigned int i) {
    _xp = i;
    return;
}