#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"
# include <iostream>

class ZombieEvent{
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string t);
    Zombie *newZombie(std::string name);
    void randomChump();
private:
    std::string zombieType;
};

#endif