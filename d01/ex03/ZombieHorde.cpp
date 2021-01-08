#include "ZombieHorde.hpp"

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

ZombieHorde::ZombieHorde() {
    return;
}

ZombieHorde::~ZombieHorde() {
    int i;

    i = 0;
    delete[] Horde;
    std::cout << "Horde deleted !" << std::endl;
    return;
}

ZombieHorde::ZombieHorde(int n) {
    int i;

    i = 0;

    this->Horde = new Zombie[n];
    this->n = n;
    while(i < n)
    {
        this->Horde[i].setTypeName("Horde", random_name());
        i++;
    }
    return;
}

void ZombieHorde::announce() {
    int i;

    i = 0;

    while(i < n) {
        this->Horde[i].announce();
        i++;
    }
    return;
}