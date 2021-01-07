#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
public:
    Zombie();
    Zombie(std::string t, std::string n);
    ~Zombie();
    void advert(void);
private:
    std::string type;
    std::string name;
};

#endif