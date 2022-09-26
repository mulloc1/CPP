#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual void think(int n) = 0;
    virtual void setType(const std::string& type) = 0;
    virtual std::string getType() const = 0;
};

#endif