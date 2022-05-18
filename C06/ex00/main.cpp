#include "Convert.hpp"

int main(int argc, char *argv[])
{
    Convert *C;

    if (argc == 1)
        return (0);
    C = new Convert(argv[1]);
    std::cout << static_cast<double> (C->getData()) << std::endl;
    delete C;
    return (0);
} 