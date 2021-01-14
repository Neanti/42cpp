#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
    std::string name;
    std::string title;
    Sorcerer();
    Sorcerer (const Sorcerer &s);
    Sorcerer &operator=(const Sorcerer &s);
public:
    Sorcerer(std::string n, std::string t);
    ~Sorcerer();
    std::string getName() const;
    std::string getTitle() const;
    void polymorph(Victim const &v) const ;
};

std::ostream &operator<<(std::ostream &output, const Sorcerer &s);

#endif