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

Fixed::Fixed(const int v) {
    this->value = v<<8;
    //std::cout << this->value << "=1" << std::endl;
    return;
}

float npow(int n, const int p)
{
    int i;
    float r;

    i = 0;
    r = 1;
    while(i > p)
    {
        r = r / n;
        i--;
    }
    return r;
}

int ftofr(const float v)
{
    int p,r;
    float c;

    p = -1;
    c = v;
    r = 0;
    if (c < 0)
        c*= -1;
    while(p != -9)
    {
        if (c - npow(2, p) >= 0) {
            //std::cout << "YES r=" << r << "c=" << c << std::endl;
            r = (r << 1) + 1;
            c = c - npow(2,p);
        }
        else {
            //std::cout << "NO r=" << r << "c=" << c << "  ET  " << c - npow(2, p) << std::endl;
            r = (r << 1);
        }
        p--;
    }
  //  std::cout << " return val=" << r << std::endl;
    return r;
}

Fixed::Fixed(const float v) {
    int d,f,r;

    d = (int) v;
    f = ftofr(v - d);
    r = (d<<8) + f;
    //std::cout << "RAW1=" << r << std::endl;
    this->value = r;
}

int Fixed::toInt() const {
    int r;

    r = value>>8;
    return r;
}

float frtof(int const n){
    float r;
    int fr;
    int p;

    r = 0;
    p = -8;
    fr = (n<<(((sizeof (int)) - 1) * 8))>>((((sizeof (int))- 1) * 8));
    std::cout << "fr = " << fr << std::endl;
    while(p != 0)
    {


        if(fr % 2 == 1 || fr % 2 == -1)
        {
            r = r + npow(2, p);
           // std::cout << "||r=" << r << " p=" << p << " fr%2=" << fr % 2 << "||" << std::endl;

        }
        fr = fr>>1;
        p++;
    }
    //std::cout << "||r=" << r <<"||" << std::endl;
    return r;
}

float Fixed::toFloat() const {
    int d;
    float f,r;

    d = value>>8;
    //std::cout << "V=" << value << "=v  d=" << d << std::endl;
    f = (d > 0 ? frtof(value) : -1 * frtof(value));
    r = d + f;
    return r;
}

std::ostream & operator<<(std::ostream &output, const Fixed &f) {
    output << "Fixed = " << f.toFloat();
    return output;
}