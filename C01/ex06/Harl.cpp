#include "Harl.hpp"

void Harl::debug(void)
{
  std::cout << "debug" << std::endl;
}

void Harl::info(void)
{
  std::cout << "info" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "warning" << std::endl;
}

void Harl::error(void)
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
    default :
      std::cout << "default" << std::endl;
      break ;
    case 1:
      debug();
    case 2:
      info();
    case 4:
      warning();
    case 8:
      error();
  }
}
