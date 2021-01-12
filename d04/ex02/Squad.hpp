#ifndef SQUAD
#define SQUAD
#include "ISquad.hpp"

class Squad : virtual public ISquad {
public:
    ~Squad();
    Squad();
    int getCount() const;
   ISpaceMarine* getUnit(int i) const;
   int push(ISpaceMarine* m);
    Squad &operator=(const Squad &s);
    Squad(const Squad &s);
private:
    ISpaceMarine **spaceMarine;
    int number;
};

#endif