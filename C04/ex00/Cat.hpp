#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& dummy);
    ~Cat();
    Cat& operator = (const Cat& dummy);

    void makeSound() const;
};

#endif