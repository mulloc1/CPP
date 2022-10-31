#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span
{
    private:
		unsigned int _size;
		std::vector<int> _vec;
		Span();

	public:
		Span(unsigned int size);
		Span(const Span &span);
		~Span();

		Span &operator=(const Span &span);
	
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int shortestSpan() const;
		int longestSpan() const;
};

#endif