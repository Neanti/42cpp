#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    return;
}

Cure::~Cure() {
    return;
}

void Cure::use(ICharacter &target){
    this->AMateria::use(target);
    return;
}

AMateria * Cure::clone() const {
    AMateria *a = new Cure();
    a->setXP(this->getXP());
    return a;
}