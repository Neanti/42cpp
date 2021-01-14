#include "EnemyChiant.hpp"

EnemyChiant::EnemyChiant() : Enemy(42, "EnemyChiant"){
    std::cout << "* ................ *" << std::endl;
    return;
}

EnemyChiant::~EnemyChiant() {
    std::cout << "* pfffffff *" << std::endl;
    return;
}

void EnemyChiant::takeDamage(int d) {
    Enemy::takeDamage(d);
    return;
}
