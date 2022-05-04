#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
  private:
   Contact  contact[8];  
   int      idx;
   int      cnt;

  public:
   void ADD();
   void SEARCH();
   void EXIT();
   void phonebookPrint();
   void phonebookPrint(int idx);
};

#endif
