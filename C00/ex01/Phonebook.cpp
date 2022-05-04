#include "Phonebook.hpp"

void  Phonebook::ADD()
{
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

  std::cout << "firstName : ";
  std::cin >> firstName;
  std::cout << "lastName: ";
  std::cin >> lastName;
  std::cout << "nickName: ";
  std::cin >> nickName;
  std::cout << "phoneNumber: ";
  std::cin >> phoneNumber;
  std::cout << "darkestSecret : ";
  std::cin >> darkestSecret;
  contact[idx].contactInit(firstName, lastName, nickName, phoneNumber, darkestSecret);
  idx = (idx + 1) % 8;
  cnt++;
}

void	elementPrint(std::string str)
{
	std::cout << "|";
	std::cout.width(10);
	if (str.size() > 10)
		std::cout << str.substr(0, 9) +  ".";
	else
		std::cout << str;
}

void  Phonebook::phonebookPrint()
{
  for (int i = 0; i < 8 && i < cnt; i++)
  {
    elementPrint(contact[i].getFirstName());
    elementPrint(contact[i].getLastName());
    elementPrint(contact[i].getNickName());
    elementPrint(contact[i].getPhoneNumber());
	  std::cout << "|";
    std::cout << std::endl;
  }
}

void  Phonebook::phonebookPrint(int idx)
{
  elementPrint(contact[idx].getFirstName());
  elementPrint(contact[idx].getLastName());
  elementPrint(contact[idx].getNickName());
  elementPrint(contact[idx].getPhoneNumber());
	std::cout << "|";
  std::cout << std::endl;
}

void  Phonebook::SEARCH()
{
  int idx;

  std::cout << "전체 출력 : -1, 특정 연락처 출력 : 0~7" << std::endl; 
  std::cout << "입력 : ";
  std::cin >> idx;
  if (idx == -1)
    phonebookPrint();
  else if (idx >= 0 && idx <= 7)
    phonebookPrint(idx);
  else
    std::cout << "잘못된 입력" << std::endl;
}

void  Phonebook::EXIT()
{
  exit(0);
}
