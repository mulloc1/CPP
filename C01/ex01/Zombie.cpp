#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, int number)
{
  this->name = name;
  this->number = number;
}

Zombie::~Zombie()
{
  std::cout << this->number << " " << this->name << " is died" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->number << " " << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string name)
{
  this->name = name;
}

std::string Zombie::getName()
{
  return (this->name);
}

void  Zombie::setNumber(int number)
{
  this->number = number;
}

int Zombie::getNumber()
{
  return (this->number);
}
