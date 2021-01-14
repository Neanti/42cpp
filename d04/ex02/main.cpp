#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{

    TacticalMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    Squad* vlc = new Squad();
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(jim);
    vlc->push(0);
    Squad *c = new Squad();
    *c = *vlc;

    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    for (int i = 0; i < c->getCount(); ++i)
    {
        ISpaceMarine* cur = c->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete c;
    return 0;
}