#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
typename T::iterator easyfind(T container, int element)
{
    return (std::find(container.begin(), container.end(), element));
}

#endif