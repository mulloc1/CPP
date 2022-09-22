#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& dummy);
    ~WrongAnimal();
    WrongAnimal& operator = (const WrongAnimal& dummy);

    void makeSound() const;
    void setType(const std::string& type);
    std::string getType() const;
};

#endif