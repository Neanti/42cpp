#include "Brain.hpp"

Brain::Brain() {
    return;
}

Brain::~Brain() {
    return;
}

int Brain::getSize() {
    return this->size;
}

std::string Brain::identify() const{
    std::string s;

    const Brain *brain = this;
    std::ostringstream oss;
    oss << brain;
    s = oss.str();
    return s;
}