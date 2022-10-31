#include "Span.hpp"
#include <exception>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <iostream>

Span::Span(unsigned int n): _size(n), _vec(0)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{}

Span &Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	_size = src._size;
	_vec = src._vec;
	return (*this);
}

void Span::addNumber(int n)
{
	if (_vec.size() == _size)
		throw std::out_of_range("vector is full");
	_vec.push_back(n);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp(begin, end);
	if (tmp.size() >= (_size - _vec.size()))
		throw std::out_of_range("range is too big for the space left");
	copy(tmp.begin(), tmp.end(), std::back_inserter(_vec));
}

int	Span::shortestSpan() const
{
	int res;
	std::vector<int> tmp = _vec;
	if (_vec.size() < 2)
		throw std::logic_error("Need at least 2 numbers in the vector");
	sort(tmp.begin(), tmp.end());
	res = (tmp[1] - tmp[0]);
	for (std::vector<int>::iterator it = tmp.begin() + 1; it < tmp.end() - 1; it++)
	{
		if (*(it + 1) - *it < res)
			res = *(it + 1) - *it;
	}
	return (res);
}

int	Span::longestSpan() const
{
	std::vector<int> tmp = _vec;
	if (_vec.size() <= 1)
		throw std::logic_error("Need at least 2 numbers in the vector");
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}