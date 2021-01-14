#ifndef SQUAD
#define SQUAD
#include "ISquad.hpp"

class Squad : public ISquad {
public:
    virtual ~Squad();
    Squad();
    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int i) const;
    virtual int push(ISpaceMarine* m);
    Squad  &operator=(const Squad &s);
    Squad(const Squad &s);
private:
    ISpaceMarine **spaceMarine;
    int number;
};

#endif