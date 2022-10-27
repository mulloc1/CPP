#include "easyfind.hpp"
#include <vector>
#include <array>
#include <list>
#include <numeric>
#include <deque>

void display(bool result)
{
    if (result)
        std::cout << "success" << std::endl;
    else
        std::cout << "failed" << std::endl;
}

int main(void)
{
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);

    std::vector<int> vect(arr, arr + n);
    ::display(easyfind(vect, 5));

    std::array<int, 6> arr2 = { 10, 20, 5, 23, 42, 15 };
    ::display(easyfind(arr2, 20));
    ::display(easyfind(arr2, 1));

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(5);
    lst.push_back(23);
    lst.push_back(42);
    lst.push_back(15);
    ::display(easyfind(lst, 42));

    std::deque<int> deq;
    deq.push_back(10);
    deq.push_back(20);
    deq.push_back(5);
    deq.push_back(23);
    deq.push_back(42);
    deq.push_back(15);
    ::display(easyfind(deq, 15));
    return (0);
}