#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base* generate(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 99);

    int ran = dis(gen);

    if (ran < 33)
        return (new A());
    else if (ran < 66)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*> (p);
    if (a != nullptr)
        std::cout << a->getType() << std::endl;
    B *b = dynamic_cast<B*> (p);
    if (b != nullptr)
        std::cout << b->getType() << std::endl;
    C *c = dynamic_cast<C*> (p);
    if (c != nullptr)
        std::cout << c->getType() << std::endl;
}

void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A&> (p);
        std::cout << a.getType() << std::endl;
    } catch (std::exception &e)
    {}

    try {
        B &b = dynamic_cast<B&> (p);
        std::cout << b.getType() << std::endl;
    } catch (std::exception &e)
    {}

    try {
        C &c = dynamic_cast<C&> (p);
        std::cout << c.getType() << std::endl;
    } catch (std::exception &e)
    {}
}

int main(void)
{
    Base* base = ::generate();
    ::identify(base);
    ::identify(*base);
    delete base;
    return (0);
}
