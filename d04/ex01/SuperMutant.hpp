#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy{
private:
    SuperMutant(const SuperMutant &s);
    SuperMutant &operator=(const SuperMutant &s);
public:
    SuperMutant();
    virtual ~SuperMutant();
    void takeDamage(int);
};

#endif