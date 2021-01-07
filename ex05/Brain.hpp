#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <sstream>
# include <string>

//#include "Human.hpp"

class Brain{
public:
    Brain();
    ~Brain();
    std::string identify() const;
    int getSize();

private:
    int size;
};

#endif