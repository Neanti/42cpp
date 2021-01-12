#ifndef CURE
#define CURE
#include "AMateria.hpp"
#include "ICharacter.hpp"

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