#include "Span.hpp"

Span::Span(const unsigned int& n)
: _n(n)
{
    std::cout << "Span constructor called" << std::endl;
}

Span::~Span()
{
    std::cout << "Span destructor callled" << std::endl;
}

Span::Span(const Span& dummy)
{
    *this = dummy;
}

Span& Span::operator = (const Span& dummy)
{
    this->_span = dummy._span;
    this->_n = dummy._n;
    return (*this);
}

void    Span::addNumber(const int& element) // 이미 존재하는 값이면 throw, 사이즈를 넘어도 throw
{
    if (element == *easyfind(this->_span, element))
        throw Span::alreadyExist();
    if (this->_span.size() == this->_n)
        throw Span::isFull();
    this->_span.insert(element);
}

int    Span::shortestSpan()
{
    int shortest;
    std::multiset<int, std::greater<int> >::iterator begin;
    std::multiset<int, std::greater<int> >::iterator next;

    shortest = 214743647;
    for (unsigned int i = 0; i < this->_n - 1; i++)
    {
        begin = std::next(this->_span.begin(), i);
        for (unsigned int j = i + 1; j < this->_n; j++)
        {
            next = std::next(this->_span.begin(), j);
            if (*begin - *next < shortest)
                shortest = *begin - *next;
        }
    }
    return (shortest);
}

int    Span::longestSpan()
{
    std::multiset<int, std::greater<int> >::iterator begin = this->_span.begin();
    std::multiset<int, std::greater<int> >::iterator end = this->_span.end();

    return (*begin - *(std::next(end, -1)));
}

const char* Span::alreadyExist::what() const throw()
{
    return "already Exist";
}

const char* Span::isFull::what() const throw()
{
    return "is Full";
}
