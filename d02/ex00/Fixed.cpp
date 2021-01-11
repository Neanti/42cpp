#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default Constructor Called !" << std::endl;
    this->value = 0;
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor Called !" << std::endl;
    return;
}

Fixed::Fixed(Fixed const &f) {
    std::cout << "Copy Constructor Called !" << std::endl;
    this->value = f.getRawBits();
    return;
}

void Fixed::operator=(const Fixed &f) {
    std::cout << "Assignation Operator Called !" << std::endl;
    this->value = f.getRawBits();
    return;
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
    return;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function Called !" << std::endl;
    return this->value;
}
