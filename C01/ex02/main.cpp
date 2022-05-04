#include <iostream>

int main(void)
{
  std::string message = "HI THIS IS BRAIN.";  
  std::string &stringREF = message;
  std::string *stringPTR = &message;
  
  std::cout << &message << std::endl;
  std::cout << &stringREF << std::endl;
  std::cout << &stringPTR << std::endl;

  std::cout << message << std::endl;
  std::cout << stringREF << std::endl;
  std::cout << *stringPTR << std::endl;

  return (0);
}
