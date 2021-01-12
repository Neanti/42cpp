#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
    PlasmaRifle();
    ~PlasmaRifle();
    void attack(void) const;
private:
    PlasmaRifle(const PlasmaRifle &pr);
    PlasmaRifle &operator=(const PlasmaRifle &pr);
};

#endif