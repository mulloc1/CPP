#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;
public:
    Dog();
    Dog(const Dog& dummy);
    ~Dog();
    Dog& operator = (const Dog& dummy);

    virtual void makeSound() const;
};

#endif