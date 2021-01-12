#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
    PowerFist();
    ~PowerFist();
    void attack(void) const;
private:
    PowerFist(const PowerFist &pr);
    PowerFist &operator=(const PowerFist &pr);

};

#endif