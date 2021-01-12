#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy{
private:
    int HP;
    std::string type;
    Enemy(const Enemy &e);
    Enemy &operator=(const Enemy &e);
    Enemy();
public:
    Enemy(int hp, std::string const &type);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif