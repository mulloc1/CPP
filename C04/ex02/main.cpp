#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    Cat* cat1 = new Cat();
    
    Brain* brain1 = new Brain();
    Brain* brain2 = new Brain();

    std::cout << "============================" << std::endl;

    std::string strs[3] = {"Hello", "World", "Cat2"};
    brain1->setIdeas(strs, 3);
    strs[2] = "Cat2";
    brain2->setIdeas(strs, 3);
    // 깊은 복사 테스트
    cat1->setBrain(*brain1);

    Cat* cat2 = new Cat(*cat1);
    cat1->getBrain()->getIdeas()[2] = "Cat1";
    cat1->think(3);
    cat2->think(3);

    std::cout << "============================" << std::endl;

    cat2->setBrain(*brain2);
    cat1->think(3);
    cat2->think(3);

    std::cout << "============================" << std::endl;
    Brain* brain3 = new Brain();
    std::string strs2[3] = {"Hello", "World", "Brain"};
    brain3->setIdeas(strs2, 3);
    cat1->setBrain(*brain3);

    cat1->think(3);
    cat2->think(3);

    std::cout << "============================" << std::endl;

    delete cat1;
    delete cat2;
    delete brain1;
    delete brain2;
    delete brain3;
    return (0);
}
