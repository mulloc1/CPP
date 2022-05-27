#include "Bureaucrat.hpp"

int main(void)
{    
    Bureaucrat jaebae("jaebae", 150);

    std::cout << jaebae << std::endl;
    try
    {
        //jaebae.decrement(150);
        jaebae.increment(151);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << jaebae << std::endl;
    return (0);
}