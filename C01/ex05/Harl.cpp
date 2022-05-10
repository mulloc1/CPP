#include "Harl.hpp"

void Harl::_debug(void)
{
  std::cout << "debug" << std::endl;
}

void Harl::_info(void)
{
  std::cout << "info" << std::endl;
}

void Harl::_warning(void)
{
  std::cout << "warning" << std::endl;
}

void Harl::_error(void)
{
  std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
  int levelN = 0;

  levelN |= (level == "DEBUG");
  levelN |= (level == "INFO") << 1;
  levelN |= (level == "WARNING") << 2;
  levelN |= (level == "ERROR") << 3;
  switch (levelN)
  {
    case 1:
      this->_debug();
      break ;
    case 2:
      this->_info();
      break ;
    case 4:
      this->_warning();
      break ;
    case 8:
      this->_error();
      break ;
  }
}
