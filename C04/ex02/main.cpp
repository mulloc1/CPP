#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    delete i;
    delete j;
    return (0);
}