#include "Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  this->raw = 0;
}

Fixed::Fixed(int const &raw)
{
  std::cout << "Int constructor called" << std::endl;
  this->raw = raw;
  this->raw <<= this->bits;
}

Fixed::Fixed(float const &raw)
{
  float temp;
  float temp2;

  std::cout << "Float constructor called" << std::endl;
  this->raw = (static_cast<int>(raw)) << this->bits;
  temp = raw - static_cast<int>(raw);
  while (1)
  {
    if (temp > 255)
      break ;
    temp2 = temp;
    temp *= 10;
  }
  this->raw += temp2;
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
  this->raw = fixed.getRawBits();
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
{
  return (this->raw);
}

void Fixed::setRawBits(int const &raw)
{
  this->raw = raw;
}

float Fixed::toFloat(void) const
{
  float res;
  float temp;

  res = this->raw >> this->bits;
  temp = this->raw & 255; 
  while (static_cast<int>(temp) != 0)
    temp /= 10;
  res += temp;
  return (res);
}

int Fixed::toInt(void) const
{
  int res;

  res = this->raw >> this->bits;
  return (res);
}
