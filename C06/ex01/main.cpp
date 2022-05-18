#include <iostream>
#include <cstdint>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*> (raw));
}

int main(void)
{
    Data *data = new Data();

    std::cout << data->getData() << std::endl;
    std::cout << ::deserialize(::serialize(data))->getData() << std::endl;
    delete data;
    return (0);
}