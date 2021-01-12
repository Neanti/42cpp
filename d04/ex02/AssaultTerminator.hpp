#ifndef ASSAULT
#define ASSAULT
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"


class AssaultTerminator : virtual public ISpaceMarine {
public:
    virtual AssaultTerminator *clone(void) const;
    AssaultTerminator();
    virtual ~AssaultTerminator();
    virtual void battleCry(void) const;
    virtual void rangedAttack(void) const;
    virtual void meleeAttack() const;
};

#endif