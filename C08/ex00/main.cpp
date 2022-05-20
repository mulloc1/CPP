#include "easyfind.hpp"
#include <vector>
#include <array>
#include <list>
#include <numeric>
#include <deque>

int main(void)
{
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);

    std::vector<int> vect(arr, arr + n);
    std::cout << *easyfind(vect, 5) << std::endl;

    std::array<int, 6> arr2 = { 10, 20, 5, 23, 42, 15 };
    std::cout << *easyfind(arr2, 20) << std::endl;
    std::cout << *easyfind(arr2, 1) << std::endl;

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(5);
    lst.push_back(23);
    lst.push_back(42);
    lst.push_back(15);
    std::cout << *easyfind(lst, 42) << std::endl;

    std::deque<int> deq;
    deq.push_back(10);
    deq.push_back(20);
    deq.push_back(5);
    deq.push_back(23);
    deq.push_back(42);
    deq.push_back(15);
    std::cout << *easyfind(deq, 15) << std::endl;
    return (0);
}