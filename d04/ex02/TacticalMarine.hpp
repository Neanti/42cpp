#ifndef TACTICAL
#define TACTICAL
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine {
public:
    virtual TacticalMarine *clone(void) const;
    TacticalMarine();
    ~TacticalMarine();
    virtual void battleCry(void) const;
    virtual void rangedAttack(void) const;
    virtual void meleeAttack(void) const;
};

#endif