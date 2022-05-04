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
    case 1:
      debug();
      break ;
    case 2:
      info();
      break ;
    case 4:
      warning();
      break ;
    case 8:
      error();
      break ;
  }
}
