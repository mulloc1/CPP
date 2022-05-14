#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& dummy);
    virtual ~Animal();
    Animal& operator = (const Animal& dummy);

    virtual void makeSound() const;
    void setType(const std::string& type);
    std::string getType() const;
};

#endif