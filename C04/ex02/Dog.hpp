#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    std::string _type;
    Brain* _brain;

public:
    Dog();
    Dog(const Dog& dummy);
    virtual ~Dog();
    Dog& operator = (const Dog& dummy);

    virtual void makeSound() const;
    virtual void think(int n);
    const Brain* getBrain();
    void setBrain(const Brain& brain);
    virtual void setType(const std::string& type);
    virtual std::string getType() const;
};

#endif