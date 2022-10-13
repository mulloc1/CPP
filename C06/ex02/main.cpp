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
    if (dynamic_cast<A*> (p) != nullptr)
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*> (p) != nullptr)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*> (p) != nullptr)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    if (dynamic_cast<A*> (&p) != nullptr)
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*> (&p) != nullptr)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*> (&p) != nullptr)
        std::cout << "C" << std::endl;
}

int main(void)
{
    Base* base = ::generate();
    ::identify(base);
    ::identify(*base);
    delete base;
    return (0);
}
