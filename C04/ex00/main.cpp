#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    std::cout << "============wrong testcase============\n";
    const WrongAnimal* wrongAnimal = new WrongCat();

    wrongAnimal->makeSound();

    delete wrongAnimal;

    return (0);
}