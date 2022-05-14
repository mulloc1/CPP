#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& dummy);
    ~Dog();
    Dog& operator = (const Dog& dummy);

    void makeSound() const;
};

#endif