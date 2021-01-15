#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <exception>
#include <limits>
#include <iomanip>
#include <math.h>

bool is_disp(char c)
{
    if (c >= '0' && c <= '9')
        return false;
    if (c >= 33 && c <= 126)
        return true;
    return false;
}

void display(char c, int i, bool di, float f, bool df, double d)
{
    if (is_disp(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (di)
        std::cout << "int: " << i << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (df)
        std::cout << "float: " << f << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;
    std::cout << "double: " << d << std::endl;
    return;
}


int main(int ac, char **av)
{
   std::cout << std::showpoint;
   std::cout << std::fixed;
   std::cout << std::setprecision(1);
    if (ac != 2) {
        std::cout << "Wrong use !" << std::endl;
        return 0;
    }

    std::string s(av[1]);

    if (s.length() == 1 && is_disp(s.at(0)))
    {
        char c = s.at(0);
        display(c, static_cast<int>(c), true, static_cast<float>(c), true, static_cast<double>(c));
    }
    else
    {
        double c = strtod(av[1], 0);
        bool di = true;
        bool df = true;
        if (isnan(c))
            di = false;
        if (c > INT_MAX || c < INT_MIN)
            di = false;
        if ((c > std::numeric_limits<float>::max() || c < std::numeric_limits<float>::min()) && (c > 10 || c < -10))
            df = false;
        if (s == "inff" || s == "+inff" || s == "-inff")
            df = true;
        display(static_cast<char>(c) , static_cast<int>(c), di, static_cast<float>(c), df, c);
    }

    return 0;
}
