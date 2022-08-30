#include "Weapon.hpp"

Weapon::~Weapon()
{}

Weapon::Weapon(const std::string& type)
{
  this->_type = type;
}

void  Weapon::setType(const std::string& type)
{
  this->_type = type;
}

std::string Weapon::getType()
{
  return (this->_type);
}
