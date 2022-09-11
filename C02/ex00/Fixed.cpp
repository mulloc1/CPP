#include "Fixed.hpp"

Fixed::Fixed()
  : _raw(0)
{ 
  std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(Fixed const &fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::~Fixed() 
{ 
  std::cout << "Destructor called" << std::endl; 
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->_raw = fixed.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member fuction called" << std::endl;
  return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member fuction called" << std::endl;
  this->_raw = raw;
}
