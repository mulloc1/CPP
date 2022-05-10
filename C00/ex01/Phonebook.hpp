#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
  private:
   Contact  _contact[8];  
   int      _idx;
   int      _cnt;

  public:
   void ADD();
   void SEARCH();
   void EXIT();
   void phonebookPrint();
   void phonebookPrint(int idx);
};

#endif
