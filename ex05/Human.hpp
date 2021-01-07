#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human{
public:
    Human();
    ~Human();
    std::string identify();
    const Brain &getBrain();

private:
    const Brain brain;
};

#endif