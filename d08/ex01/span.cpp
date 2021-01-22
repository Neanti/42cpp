#include "span.hpp"

void span::addNumber(int n) {
    if (cap == len)
        throw FullArray();
    list[len] = n;
    len++;
    return;
}

span::span(unsigned int n) : cap(n){
    len = 0;
    list = new int[n];
    return;
}

span::~span() {
    return;
}

long span::longestSpan() const {
    if (len == 0)
        throw EmptyArray();
    if (len == 1)
        throw NotEnoughArray();

    int max = *std::max_element(list, list + len);
    int min = *std::min_element(list, list + len);
    long span = max - min;
    if (span < 0)
        span *= -1;
    return span;
}

long span::shortestSpan() const {

    unsigned int i,j;
    long span = std::numeric_limits<long>::max();
    i = 0;
    j = 1;
    while(i < len)
    {
        while(j < len)
        {
            long d = ((list[i] < 0) ? list[i] * -1 : list[i]) - ((list[j] < 0) ? list[j] * -1 :  list[j]);
            if (d < 0)
                d *= -1;
            if (d < span)
                span = d;
            if (span == 0)
                return span;
            j++;
        }
        i++;
        j = i + 1;
    }
    return span;
}

int * span::getList() const {
    return list;
}

void span::populate() {
    unsigned int i = 0;
    if (len != 0)
        return;
    while(i < this->cap) {
        int j = rand();
        if (rand() % 2)
            j *= -1;
        this->list[i] = j;
        i++;
    }
    this->len = this->cap;
    return;
}