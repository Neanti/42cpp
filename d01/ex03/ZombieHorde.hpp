#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde{
public:
    ZombieHorde();
    ~ZombieHorde();
    ZombieHorde(int n);
    void announce(void);
private:
    Zombie *Horde;
    int n;
};

#endif