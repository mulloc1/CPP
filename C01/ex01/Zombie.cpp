#include "Zombie.hpp"

Zombie::Zombie()
{
  std::cout << "Zombie constructor called\n" << std::endl;
}

Zombie::~Zombie()
{
  std::cout << this->_number << " Zombie is died" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->_number << " Zombie : BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setNumber(int number)
{
  this->_number = number;
}

int Zombie::getNumber()
{
  return (this->_number);
}
