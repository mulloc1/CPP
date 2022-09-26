#include "Dog.hpp"

Dog::Dog()
: _type("Dog"), _brain(nullptr)
{
    this->_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& dummy)
: _type("Dog"), _brain(nullptr)
{
    *this = dummy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& dummy)
{
    delete this->_brain;
    this->_brain = new Brain(*dummy._brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " says mew-mew" << std::endl;
}

void Dog::think(int n)
{
    for (int i = 0; i < n; i++) 
        std::cout << this->_brain->getIdeas()[i] << " ";
    std::cout << std::endl;
}

const Brain* Dog::getBrain()
{
    return this->_brain;
}

void Dog::setBrain(const Brain& brain)
{
    *this->_brain = brain;
}

void Dog::setType(const std::string& type)
{
    this->_type = type;
}

std::string Dog::getType() const
{
    return (this->_type);
}
