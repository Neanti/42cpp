#include "span.hpp"
#include "algorithm"
#include <random>
#include <iostream>

int main()
{
    srand(time(0));
    span  *s = new span(10000);
    int i = 0;
    while(i < 10000) {
        int j = rand();
        if (rand() % 2)
            j *= -1;
        s->addNumber(j);
        i++;
    }

    std::cout << "Longest=" << s->longestSpan() <<std::endl;
    std::cout << "Shortest=" << s->shortestSpan() <<std::endl;

    return 0;
}