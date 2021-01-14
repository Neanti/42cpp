#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    virtual void use(ICharacter &target);
    virtual AMateria *clone(void) const;
private:
    Ice(const Ice &c);
    Ice &operator=(const Ice &c);
};

#endif