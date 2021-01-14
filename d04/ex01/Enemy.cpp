#include "Enemy.hpp"

void Enemy::takeDamage(int d) {
    if (d < 0)
    {
        return;
    }
    else
    {
        HP -= d;
        if(HP < 0)
            HP = 0;
        return;
    }
}

std::string Enemy::getType() const {
    return type;
}

int Enemy::getHP() const {
    return HP;
}

Enemy::Enemy(int hp, const std::string &type) : HP(hp), type(type){
    return;
}

Enemy::~Enemy() {
    return;
}

Enemy::Enemy() {
    return;
}
