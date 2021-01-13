#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    srand(time(NULL));
    std::string v;

    FragTrap *f1 = new FragTrap("BobbY");
    f1->rangedAttack("BAD GUY");
    f1->meleeAttack("BALD GUY");
    f1->takeDamage(21);
    f1->beRepaired(2);
    f1->beRepaired(999);
    f1->takeDamage(999);
    f1->vaulthunter_dot_exe("TRIStAN");
    f1->vaulthunter_dot_exe("BLOB");
    f1->vaulthunter_dot_exe("BLIB");
    f1->vaulthunter_dot_exe("BLAB");
    f1->vaulthunter_dot_exe("BLEB");
    delete f1;
    std::getline(std::cin, v);

    ScavTrap *s1 = new ScavTrap("Billy");
    s1->rangedAttack("BAD GUY");
    s1->meleeAttack("BALD GUY");
    s1->takeDamage(21);
    s1->beRepaired(2);
    s1->beRepaired(999);
    s1->takeDamage(999);
    s1->challengeNewcomer("TRIStAN");
    s1->challengeNewcomer("BLOB");
    s1->challengeNewcomer("BLIB");
    delete s1;
    std::getline(std::cin, v);

    NinjaTrap *n1 = new NinjaTrap("Bonny");
    n1->rangedAttack("BAD GUY");
    n1->meleeAttack("BALD GUY");
    n1->takeDamage(21);
    n1->beRepaired(2);
    n1->beRepaired(999);
    n1->takeDamage(999);

    FragTrap *f2 = new FragTrap("BobbY");
    ScavTrap *s2 = new ScavTrap("Billy");
    NinjaTrap *n2 = new NinjaTrap("Bonny");
    ClapTrap *c2 = new ClapTrap("Clap");

    n1->ninjaShoebox(*f2);
    n1->ninjaShoebox(*s2);
    n1->ninjaShoebox(*n2);
    n1->ninjaShoebox(*c2);
    delete f2;
    delete s2;
    delete n2;
    std::cout << std::endl << std::endl;
    delete n1;
    return (0);
}