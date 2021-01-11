#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));

    FragTrap f1("bOBBY");
    f1.rangedAttack("BAD GUY");
    f1.meleeAttack("BALD GUY");
    f1.takeDamage(21);
    f1.beRepaired(2);
    f1.beRepaired(999);
    f1.takeDamage(999);
    f1.vaulthunter_dot_exe("TRIStAN");
    f1.vaulthunter_dot_exe("BLOB");
    f1.vaulthunter_dot_exe("BLIB");
    f1.vaulthunter_dot_exe("BLAB");
    f1.vaulthunter_dot_exe("BLEB");

    return (0);
}