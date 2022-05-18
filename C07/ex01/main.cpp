#include <iostream>
#include "iter.hpp"

void add(int *num)
{
    *num += 1;
}

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    iter(arr, 5, add);

    for (int i = 0; i < 5; i++)
    std::cout << arr[i] << " ";
    std::cout << std::endl;
    return (0);
}