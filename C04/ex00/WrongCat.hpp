#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& dummy);
    ~WrongCat();
    WrongCat& operator = (const WrongCat& dummy);

    void makeSound() const;
};

#endif