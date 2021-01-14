#include <random>
#include <iostream>

struct Data{
    std::string s1;
    int n;
    std::string s2;
};

std::string random_string(void)
{
    std::string s;
    int i;

    i = 0;
    while(i < 8)
    {
        char c = rand() % 26 + (int)'A';
        if (rand() % 2)
            c += 32;
        s += c;
        i++;
    }
    return s;
}

void *serialize(void)
{
    struct Data *d = new Data;
    d->n = rand();
    d->s2 = random_string();
    d->s1 = random_string();
    std::cout << "s1=" << d->s1 << " s2=" << d->s2 << " n=" << d->n << std::endl;
    return (void*) d;
}

Data *deserialize(void *raw)
{
    struct Data *d = (Data*)raw;
    return d;
}

int main()
{
    srand(time(NULL));
    Data *d = new Data;
    d = deserialize(serialize());
    std::cout << "s1=" << d->s1 << " s2=" << d->s2 << " n=" << d->n << std::endl;
    return 0;
}