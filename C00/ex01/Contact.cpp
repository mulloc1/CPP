#include "Contact.hpp"

void  Contact::contactInit(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
  this->_firstName = firstName;
  this->_lastName = lastName;
  this->_nickName = nickName;
  this->_phoneNumber = phoneNumber;
  this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
  return (this->_firstName);
}

std::string Contact::getLastName()
{
  return (this->_lastName);
}

std::string Contact::getNickName()
{
  return (this->_nickName);
}

std::string Contact::getPhoneNumber()
{
  return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
  return (this->_darkestSecret);
}
