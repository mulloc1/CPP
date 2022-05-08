#include "Fixed.hpp"

Fixed::Fixed() { this->raw = 0; }

Fixed::Fixed(int const &raw) { this->raw = raw << this->bits; }

Fixed::Fixed(float const &raw)
{
  float temp;
  float temp2;

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

Fixed::Fixed(Fixed const &fixed) { *this = fixed; }

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &fixed)
{
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

int Fixed::getRawBits(void) const { return (this->raw); }

void Fixed::setRawBits(int const &raw) { this->raw = raw; }

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

int Fixed::toInt(void) const { return (this->raw >> this->bits); }

Fixed& Fixed::operator++()
{
  this->raw++;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed temp;
  temp = *this;
  this->raw++;
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
  return (fixed1.getRawBits() + fixed2.getRawBits());
}

Fixed operator-(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() - fixed2.getRawBits());
}

Fixed operator*(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() * (fixed2.getRawBits() >> 8));
}

Fixed operator/(const Fixed &fixed1, const Fixed &fixed2)
{
  return (fixed1.getRawBits() / fixed2.getRawBits());
}
