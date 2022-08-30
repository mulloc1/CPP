#include "HumanA.hpp"

HumanA::~HumanA()
{}

HumanA::HumanA(const std::string& name, Weapon& weapon)
  : _name(name), _weapon(weapon)
{}

void  HumanA::setWeapon(Weapon& weapon)
{
  this->_weapon = weapon;
}

void  HumanA::attack()
{
  std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
