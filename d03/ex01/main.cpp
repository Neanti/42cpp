#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));

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

    ScavTrap s1("Billy");
    s1.rangedAttack("BAD GUY");
    s1.meleeAttack("BALD GUY");
    s1.takeDamage(21);
    s1.beRepaired(2);
    s1.beRepaired(999);
    s1.takeDamage(999);
    s1.challengeNewcomer("TRIStAN");
    s1.challengeNewcomer("BLOB");
    s1.challengeNewcomer("BLIB");

    return (0);
}