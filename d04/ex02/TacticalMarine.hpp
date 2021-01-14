#ifndef TACTICAL
#define TACTICAL
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    virtual TacticalMarine *clone(void) const;
    TacticalMarine();
    virtual ~TacticalMarine();
    virtual void battleCry(void) const;
    virtual void rangedAttack(void) const;
    virtual void meleeAttack(void) const;

private:
    TacticalMarine &operator=(const TacticalMarine &t);
    TacticalMarine(const TacticalMarine &t);
};

#endif