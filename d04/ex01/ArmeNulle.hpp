#ifndef ARMENULLE_HPP
#define ARMENULLE_HPP
#include "AWeapon.hpp"

class ArmeNulle : public AWeapon{
public:
    ArmeNulle();
    virtual ~ArmeNulle();
    void attack(void) const;
private:
    ArmeNulle(const ArmeNulle &pr);
    ArmeNulle &operator=(const ArmeNulle &pr);
};

#endif