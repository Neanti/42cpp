#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    return;
}

Ice::~Ice() {
    return;
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    _xp += 10;
    return;
}

AMateria * Ice::clone() const {
    AMateria *a = new Ice();
    a._xp = _xp;
    return a;
}