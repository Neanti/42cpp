#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &f);
    void operator= (const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
private:
    int value;
    static const int bits = 8;
};

#endif