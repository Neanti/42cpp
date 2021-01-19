#ifndef MUTANT_HPP
#define MUTANT_HPP
#include <stack>
#include <iterator>
template<class T>
class MutantStack : public std::stack<T> {
private:
    MutantStack<T> &operator=(MutantStack const &mutantStack);
    MutantStack<T>(MutantStack const &mutantStack);
public:
    ~MutantStack<T>();
    MutantStack<T>();
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator	begin();
    iterator	end();
};

template<class T>
MutantStack<T>::~MutantStack() {
    return;
}

template<class T>
MutantStack<T>::MutantStack() : std::stack<T>() {
    return;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
    return (std::begin(std::stack<T>::c));
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
    return (std::end(std::stack<T>::c));
}
#endif