#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main(){

MutantStack<int>    mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);

mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while(it != ite)
{
    std::cout << *it << std::endl;
    ++it;
}
std::stack<int> s(mstack);


    MutantStack<char>    cstack;
    cstack.push('A');
    cstack.push('H');
    std::cout << cstack.top() << std::endl;
    cstack.pop();
    std::cout << cstack.size() << std::endl;
    cstack.push('P');
    cstack.push('O');
    cstack.push('k');

    cstack.push(0);
    MutantStack<char>::iterator ic = cstack.begin();
    MutantStack<char>::iterator ice = cstack.end();
    ++ic;
    --ic;
    while(ic != ice)
    {
        std::cout << *ic << std::endl;
        ++ic;
    }
return 0;
}