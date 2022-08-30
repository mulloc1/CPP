#include "Zombie.hpp"

int Zombie::_zombieCount = 0;

Zombie::Zombie()
{
  this->_number = Zombie::_zombieCount;
  Zombie::_zombieCount++;
  std::cout << this->_number << " Zombie constructor called\n";
}

Zombie::~Zombie()
{
  std::cout << this->_number << " Zombie is died\n";
}

void  Zombie::announce(void)
{
  std::cout << this->_number << " Zombie : BraiiiiiiinnnzzzZ...\n";
}

void  Zombie::setNumber(const int& number)
{
  this->_number = number;
}

int Zombie::getNumber()
{
  return (this->_number);
}
