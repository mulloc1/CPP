#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const Brain& dummy)
{
    *this = dummy;
}

Brain::~Brain()
{}

Brain& Brain::operator = (const Brain& dummy)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = dummy._ideas[i];
    return (*this);
}