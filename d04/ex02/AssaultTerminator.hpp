#ifndef ASSAULT
#define ASSAULT
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine {
public:
    virtual AssaultTerminator *clone(void) const;
    AssaultTerminator();
    virtual ~AssaultTerminator();
    virtual void battleCry(void) const;
    virtual void rangedAttack(void) const;
    virtual void meleeAttack() const;

private:
    AssaultTerminator &operator=(const AssaultTerminator &a);
    AssaultTerminator(const AssaultTerminator &a);
};

#endif