#include "ISquad.hpp"
#include "Squad.hpp"

Squad::Squad() {
    return;
}

int Squad::getCount() const {
    return number;
}

ISpaceMarine * Squad::getUnit(int i) const {
    if (i >= number)
        return nullptr;
    return (&(spaceMarine[0][i]));
}

int Squad::push(ISpaceMarine *m) {
    int j;

    j = 0;
    while(&(m[0]) != &((spaceMarine[0][j])) && j < number)
        j++;
    if (m == spaceMarine[j] || m == NULL)
        return number;
    ISpaceMarine **tmp = new ISpaceMarine*[number + 1];
    number++;
    j = 0;
    while(j < number)
    {
        tmp[0][j] = spaceMarine[0][j];
        j++;
    }
    tmp[0][j] = m[0];
    delete[] spaceMarine;
    spaceMarine = tmp;
    return number;
}


