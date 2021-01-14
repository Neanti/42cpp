#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    return;
}

Ice::~Ice() {
    return;
}

void Ice::use(ICharacter &target){
    this->AMateria::use(target);
    return;
}

AMateria * Ice::clone() const {
    AMateria *a = new Ice();
    a->setXP(this->getXP());
    return a;
}