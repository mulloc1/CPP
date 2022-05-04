#include "Phonebook.hpp"
#include <iostream>

int main(void)
{
  std::string cmd;
  Phonebook phonebook;

  while (1)
  {
    std::cout << "명령어를 입력 : ";
    std::cin >> cmd;
    if (cmd == "ADD")
      phonebook.ADD();
    else if (cmd == "SEARCH")
      phonebook.SEARCH();
    else if (cmd == "EXIT")
      phonebook.EXIT();
  }
  return (0);
}
