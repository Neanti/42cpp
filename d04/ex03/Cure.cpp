#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    return;
}

Cure::~Cure() {
    return;
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    _xp += 10;
    return;
}

AMateria * Cure::clone() const {
    AMateria *a = new Cure();
    a._xp = _xp;
    return a;
}