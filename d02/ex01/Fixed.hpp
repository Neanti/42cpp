#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
class Fixed{
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &f);
    void operator= (const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(const int v);
    Fixed(const float v);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int value;
    static const int bits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &f);


#endif