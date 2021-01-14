#ifndef ENEMYCHIANT_HPP
#define ENEMYCHIANT_HPP
#include "Enemy.hpp"

class EnemyChiant : public Enemy{
private:
    EnemyChiant(const EnemyChiant &s);
    EnemyChiant &operator=(const EnemyChiant &s);
public:
    EnemyChiant();
    virtual ~EnemyChiant();
    void takeDamage(int);
};

#endif