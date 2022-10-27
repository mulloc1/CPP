#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
bool easyfind(T container, int element)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), element);
    return *iter == element;
}

#endif