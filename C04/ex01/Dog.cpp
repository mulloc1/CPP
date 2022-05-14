#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& dummy)
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
    this->_type = dummy._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " says bow-bow" << std::endl;
}