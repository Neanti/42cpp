#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

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
    _xp += 10;
    return;
}

AMateria::~AMateria() {
    return;
}

AMateria::AMateria() {
    return;
}
