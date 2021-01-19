#ifndef SPAN_HPP
#define SPAN_HPP
#include <exception>
#include <algorithm>

class span {
private:
    int *list;
    unsigned int len;
    unsigned int cap;
    span();
    span &operator=(span const &s);
    span(span const &s);
public:
    ~span();
    span(unsigned int n);
    void addNumber(int n);
    long int shortestSpan() const;
    long int longestSpan() const;
    int *getList(void) const;
    class FullArray : public std::exception {
    public:
        virtual const char *what(void) const throw()
        {
            return "Array is Full !";
        }
    };
    class EmptyArray : public std::exception {
    public:
        virtual const char *what(void) const throw()
        {
            return "Array is Empty !";
        }
    };
    class NotEnoughArray : public std::exception {
    public:
        virtual const char *what(void) const throw()
        {
            return "Array has only one element !";
        }
    };
};

#endif