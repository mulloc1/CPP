#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <exception>
# include <set>

template <typename T>
typename T::iterator easyfind(T container, int element)
{
    return (std::find(container.begin(), container.end(), element));
}

class Span
{
private:
    std::multiset<int, std::greater<int> > _span;
    unsigned int                _n;
public:
    explicit Span(const unsigned int& n);
    ~Span();
    Span(const Span& dummy);
    Span& operator = (const Span& dummy);
    void    addNumber(const int& element);
    int     shortestSpan();
    int     longestSpan();

    class alreadyExist : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class isFull : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

#endif