#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
protected:
    std::string name;
private:
    Victim();
    Victim (const Victim &s);
    Victim &operator=(const Victim &s);
public:
    Victim(std::string n);
    virtual ~Victim();
    std::string getName() const;
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &output, const Victim &s);

#endif