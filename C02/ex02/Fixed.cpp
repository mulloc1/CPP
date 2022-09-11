#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() 
  : _raw(0)
{}

Fixed::Fixed(int const &raw)
  : _raw(raw << this->_bits)
{}

Fixed::Fixed(float const &raw)
  : _raw(roundf(raw * (1 << this->_bits)))
{}

Fixed::Fixed(Fixed const &fixed) 
{ 
  *this = fixed; 
}

Fixed::~Fixed() 
{}

Fixed& Fixed::operator=(const Fixed &fixed)
{
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
{ 
  return (this->_raw);
}

void Fixed::setRawBits(int const &raw) 
{ 
  this->_raw = raw; 
}

float Fixed::toFloat(void) const
{ 
  return (static_cast<float>(this->_raw) / static_cast<float> (1 << this->_bits)); 
}

int Fixed::toInt(void) const 
{ 
  return (this->_raw >> this->_bits);
}

Fixed& Fixed::operator++()
{
  this->_raw++;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed temp;
  temp = *this;
  this->_raw++;
  return (temp);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
  if (fixed1 > fixed2)
    return (fixed1);
  return (fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
  if (fixed1 > fixed2)
    return (fixed1);
  return (fixed2);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
  if (fixed1 < fixed2)
    return (fixed1);
  return (fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
  if (fixed1 < fixed2)
    return (fixed1);
  return (fixed2);
}

bool operator>(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() > fixed2.getRawBits());  
}

bool operator<(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() < fixed2.getRawBits());  
}

bool operator>=(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() >= fixed2.getRawBits());  
}

bool operator<=(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() <= fixed2.getRawBits());  
}
bool operator==(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() == fixed2.getRawBits());  
}
bool operator!=(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() != fixed2.getRawBits());  
}

Fixed operator+(const Fixed &fixed1, const Fixed &fixed2)
{
  Fixed res;

  res.setRawBits(fixed1.getRawBits() + fixed2.getRawBits());
  return (res);
}

Fixed operator-(const Fixed &fixed1, const Fixed &fixed2)
{
  Fixed res;

  res.setRawBits(fixed1.getRawBits() - fixed2.getRawBits());
  return (res);
}

Fixed operator*(const Fixed &fixed1, const Fixed &fixed2)
{
  Fixed res;

  res.setRawBits(fixed1.getRawBits() * (fixed2.getRawBits()) >> 8);
  return (res);
}

Fixed operator/(const Fixed &fixed1, const Fixed &fixed2)
{
  Fixed res;

  res.setRawBits((fixed1.getRawBits()) / (fixed2.getRawBits() >> 8));
  return (res);
}
