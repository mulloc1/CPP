#include "Fixed.hpp"

Fixed::Fixed()
  : _raw(0)
{ std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(int const &raw)
  : _raw(raw << this->_bits)
{ std::cout << "Int constructor called" << std::endl; }
  

Fixed::Fixed(float const &raw)
  : _raw(roundf(raw * (1 << this->_bits)))
{ std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed(Fixed const &fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::~Fixed()
{ std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed &fixed)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->_raw = fixed.getRawBits();
  return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
  int temp;

  temp = fixed.getRawBits();
  temp <<= 24;
  if (temp == 0)
    out << fixed.toInt();
  else
    out << fixed.toFloat();
  return (out);
}

int Fixed::getRawBits(void) const
{ return (this->_raw); }

void Fixed::setRawBits(int const &raw)
{ this->_raw = raw; }

float Fixed::toFloat(void) const
{ return (static_cast<float>(this->_raw) / static_cast<float> (1 << this->_bits)); }

int Fixed::toInt(void) const
{ return (this->_raw >> this->_bits); }
