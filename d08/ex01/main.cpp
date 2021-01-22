#include "span.hpp"
#include "algorithm"
#include <random>
#include <iostream>

int main()
{
    srand(time(0));
    span  *s = new span(10000);
    s->populate();

    std::cout << "Longest=" << s->longestSpan() <<std::endl;
    std::cout << "Shortest=" << s->shortestSpan() <<std::endl;

    return 0;
}