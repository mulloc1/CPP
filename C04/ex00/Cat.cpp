#include "Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& dummy)
{
    *this = dummy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& dummy)
{
    this->_type = dummy._type;
    return (*this);
}

virtual void Cat::makeSound() const
{
    std::cout << this->getType() << " says mew-mew" << std::endl;
}