#ifndef CURE_HPP
#define CURE_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    virtual void use(ICharacter &target);
    virtual AMateria *clone(void) const;
private:
    Cure(const Cure &c);
    Cure &operator=(const Cure &c);
};

#endif