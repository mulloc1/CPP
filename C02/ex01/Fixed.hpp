#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
  private:
    int raw;
    static const int bits = 8;

  public:
    Fixed();
    Fixed(int const &raw);
    Fixed(float const &raw);
    Fixed(Fixed const &fixed);
    ~Fixed();
    Fixed& operator=(const Fixed &fixed);
    
    int getRawBits(void) const;
    void setRawBits(int const &raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif
