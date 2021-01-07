#include "ZombieEvent.hpp"

std::string random_name(void)
{
    int i;
    std::string name;
    int j;
    i = 0;
    while(i < 10)
    {
        j = rand() % 40 + 49;
        name+= (char)j;
        i++;
    }
    return name;
}

ZombieEvent::ZombieEvent() {
    return;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "zombievent destructor " << this->zombieType << std::endl;
    return;
}

Zombie * ZombieEvent::newZombie(std::string name) {
    Zombie *z = new Zombie(this->zombieType, name);
    return z;
}

void ZombieEvent::randomChump() {
    Zombie z(this->zombieType, random_name());
    z.advert();
    return;
}

void ZombieEvent::setZombieType(std::string t) {
    this->zombieType = t;
    return;
}

