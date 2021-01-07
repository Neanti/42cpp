#include "ZombieEvent.hpp"

int main()
{
    srand(time(NULL));

    Zombie z1("type", "name");
    z1.advert();
    Zombie *z2 = new Zombie("t1", "n1");
    z2->advert();
    delete z2;
    ZombieEvent ze;
    ze.setZombieType("BOBO");
    Zombie *z3 = ze.newZombie("BOBBBY");
    z3->advert();
    delete z3;
    ze.randomChump();

    return (0);
}