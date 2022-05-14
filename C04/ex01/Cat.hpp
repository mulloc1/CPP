#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& dummy);
    ~Cat();
    Cat& operator = (const Cat& dummy);

    virtual void makeSound() const;
};

#endif