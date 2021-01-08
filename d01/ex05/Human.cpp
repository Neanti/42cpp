#include "Human.hpp"

Human::Human() {
    return;
}

Human::~Human() {
    return;
}

std::string Human::identify() {
    std::string s;

    s = brain.identify();
    return s;
}

const Brain &Human::getBrain() {
    return this->brain;
}