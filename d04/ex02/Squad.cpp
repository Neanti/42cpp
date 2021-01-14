#include "ISquad.hpp"
#include "Squad.hpp"

Squad::Squad() {
    this->number = 0;
    this->spaceMarine = nullptr;
    return;
}

Squad::Squad(const Squad &s) {
    int i;

    i = 0;
    number = s.number;

    spaceMarine = new ISpaceMarine*[number];
    while(i < number)
    {
        spaceMarine[i] = s.getUnit(i)->clone();
        i++;
    }
    return;
}

Squad &Squad::operator=(const Squad &s) {
    int i;

    i = 0;
    while(i < number)
    {
        delete spaceMarine[i];
        i++;
    }

    delete spaceMarine;
    i = 0;
    number = s.number;
    spaceMarine = new ISpaceMarine*[number];
    while(i < number)
    {
        spaceMarine[i] = s.getUnit(i)->clone();
        i++;
    }
    return *this;
}

Squad::~Squad() {
    int j;

    j = 0;
    while(j < number)
    {
        delete spaceMarine[j];
        j++;
    }
    delete spaceMarine;
    return;
}

int Squad::getCount() const {
    return number;
}

ISpaceMarine * Squad::getUnit(int i) const {
    if (i >= number)
        return nullptr;
    return (spaceMarine[i]);
}

int Squad::push(ISpaceMarine *m) {
    int j;

    j = 0;
    if(m == nullptr)
        return number;
    if(number == 0)
    {
        ISpaceMarine **tmp = new ISpaceMarine*[1]();
        tmp[0] = m;
        number = 1;
        spaceMarine = tmp;
        return number;
    }
    while((j < number) && m != spaceMarine[j]) {
        j++;
    }
    if (m == spaceMarine[j])
        return number;
        ISpaceMarine **tmp = new ISpaceMarine*[number + 1];
    j = 0;
    while(j < number)
    {
        tmp[j] = spaceMarine[j];
        j++;
    }
    tmp[j] = m;
    delete[] spaceMarine;
    spaceMarine = tmp;
    number++;
    return number;
}


