#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include<cstdlib>
#include<ctime>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
    Base* base = ::generate();
    ::identify(base);
    ::identify(*base);
    delete base;
    return (0);
}

Base* generate(void)
{
    srand((unsigned int)time(NULL));
    int ran = std::rand() % 100;

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