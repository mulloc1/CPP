#include <iostream>
#include "iter.hpp"

void display(int &num)
{
    std::cout << "var = " <<  num << std::endl;
}

void display(const int &num)
{
    std::cout << "var = " << num << std::endl;
}

int main(void)
{
    int *arr = new int[5];

    for (int i = 0; i < 5; i++)
        arr[i] = i;

    iter(arr, 5, display);

    const int arr2[5] = {0, 1, 2, 3, 4};
    iter(arr2, 5, display);
    return (0);
}