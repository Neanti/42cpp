#include "ISquad.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for action !" << std::cout;
    return;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
}