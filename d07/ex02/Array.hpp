#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template<class T>
class Array {
private:
    T *list;
    int n;
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(Array const &a);
    Array &operator=(Array const &a);
    T &operator[](int i);
    int size() const;

    class OutOfBounds : public std::exception{
    public:
        virtual const char *what(void) const throw()
        {
            return "Index out of Bounds !";
        }
    };
};

template<class T>
int Array<T>::size() const {
    return n;
}

template<class T>
Array<T>::Array() {
    list = new T[0];
    return;
}

template<class T>
Array<T>::Array(unsigned int n) {
    unsigned int i = 0;

    this->n = n;
    list = new T[n];
    while(i < n)
    {
        list[i] = 0;
        i++;
    }
    return;
}

template<class T>
Array<T>::~Array() {
    return;
}

template<class T>
Array<T>::Array(const Array<T> &a) {
    int i = 0;

    list = new T[a.n];
    while(i < n)
    {
        list[i] = a.list[i];
        i++;
    }
    return;
}

template<class T>
Array<T> & Array<T>::operator=(const Array<T> &a) {
    delete list;
    int i = 0;

    this->n = a.size();
    list = new T[a.n];
    while(i < a.size())
    {
        list[i] = a.list[i];
        i++;
    }
    return *this;
}

template<class T>
T & Array<T>::operator[](int i) {
    if (i > n - 1 || i < 0)
        throw OutOfBounds();
    return list[i];
}

























#endif