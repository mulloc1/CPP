#include "HumanB.hpp"

HumanB::~HumanB()
{}

HumanB::HumanB(std::string name)
  : _name(name), _weapon(nullptr)
{}

void  HumanB::attack()
{
  std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}

void  HumanB::setWeapon(Weapon &weapon)
{
  this->_weapon = &weapon;
}
