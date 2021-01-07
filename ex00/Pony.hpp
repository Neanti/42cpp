#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony{
public:
    Pony();
    ~Pony();
    void setName(std::string s);
    void printName(void);
private:
    std::string name;
};
#endif