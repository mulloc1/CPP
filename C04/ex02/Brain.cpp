#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& dummy)
{
    *this = dummy;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator = (const Brain& dummy)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = dummy._ideas[i];
    return (*this);
}

void Brain::setIdeas(const std::string* ideas, int len)
{
    int loop_num = (len <= 100) ? len : 100; 
    for (int i = 0; i < loop_num; i++)
        this->_ideas[i] = ideas[i];
}

std::string* Brain::getIdeas()
{
    return this->_ideas;
}