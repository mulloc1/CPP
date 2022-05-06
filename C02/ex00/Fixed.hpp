#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
  private:
    int raw;
    static const int Bits = 8;

  public:
    Fixed();
    Fixed(Fixed const &fixed);
    ~Fixed();
    Fixed& operator=(const Fixed &fixed);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
