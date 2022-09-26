#include "Cat.hpp"

Cat::Cat()
: Animal("Cat"), _brain(nullptr)
{
    this->_brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& dummy)
: Animal("Cat"), _brain(nullptr)
{
    *this = dummy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& dummy)
{
    delete this->_brain;
    this->_brain = new Brain(*dummy._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " says mew-mew" << std::endl;
}

void Cat::think(int n) const
{
    for (int i = 0; i < n; i++) 
        std::cout << this->_brain->getIdeas()[i] << " ";
    std::cout << std::endl;
}

Brain* Cat::getBrain()
{
    return this->_brain;
}

void Cat::setBrain(const Brain& brain)
{
    *this->_brain = brain;
}