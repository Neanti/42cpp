#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "ArmeNulle.hpp"
#include "EnemyChiant.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    std::cout << std::endl << std::endl;
    me->attack(b);
    std::cout << *me;
    std::cout << std::endl << std::endl;

    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    std::cout << std::endl << std::endl;
    std::cout << std::endl << std::endl;

    Enemy *c = new SuperMutant();
    me->attack(c);
    std::cout << *me;
    std::cout << std::endl << std::endl;

    me->equip(pf);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << std::endl << std::endl;

    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    std::cout << "Recover AP" <<std::endl << std::endl;
    std::cout << std::endl << std::endl;

    me->attack(c);
    std::cout << *me;
    me->attack(c);

    AWeapon *n = new ArmeNulle();
    Enemy *ec = new EnemyChiant();
    me->equip(n);
    me->attack(ec);

    return 0;
}