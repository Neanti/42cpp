#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy{
private:
    RadScorpion(const RadScorpion &s);
    RadScorpion &operator=(const RadScorpion &s);
public:
    RadScorpion();
    virtual ~RadScorpion();
    void takeDamage(int);
};

#endif