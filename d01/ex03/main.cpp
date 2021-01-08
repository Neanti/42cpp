#include "ZombieHorde.hpp"

int main()
{
    srand(time(NULL));

    ZombieHorde zh(5);
    zh.announce();
    return (0);
}