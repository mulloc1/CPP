#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
  private:
    int               _raw;
    static const int  _bits = 8;

  public:
    Fixed();
    Fixed(int const &raw);
    Fixed(float const &raw);
    Fixed(Fixed const &fixed);
    ~Fixed();

    Fixed& operator=(const Fixed &fixed);
    Fixed& operator++();
    Fixed operator++(int);
    
    int getRawBits(void) const;
    void setRawBits(int const &raw);
    float toFloat(void) const;
    int toInt(void) const;

    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);
bool operator>(const Fixed &fixed1, const Fixed &fixed2);
bool operator<(const Fixed &fixed1, const Fixed &fixed2);
bool operator>=(const Fixed &fixed1, const Fixed &fixed2);
bool operator<=(const Fixed &fixed1, const Fixed &fixed2);
bool operator==(const Fixed &fixed1, const Fixed &fixed2);
bool operator!=(const Fixed &fixed1, const Fixed &fixed2);

Fixed operator+(const Fixed &fixed1, const Fixed &fixed2);
Fixed operator-(const Fixed &fixed1, const Fixed &fixed2);
Fixed operator*(const Fixed &fixed1, const Fixed &fixed2);
Fixed operator/(const Fixed &fixed1, const Fixed &fixed2);

#endif
