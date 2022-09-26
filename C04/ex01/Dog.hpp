#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;
public:
    Dog();
    Dog(const Dog& dummy);
    virtual ~Dog();
    Dog& operator = (const Dog& dummy);

    virtual void makeSound() const;
    virtual void think(int n) const;
    Brain* getBrain();
    void setBrain(const Brain& brain);
};

#endif