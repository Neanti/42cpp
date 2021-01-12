#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Noob.hpp"
int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Noob toto("toto");
    std::cout << robert << jim << joe << toto;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(toto);
    return 0;
}