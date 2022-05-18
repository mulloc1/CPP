#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T min(T& n1, T& n2)
{
    if (n1 > n2)
        return (n2);
    return (n1);
}

template <typename T>
T max(T& n1, T& n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
}

template <typename T>
void swap(T& n1, T& n2)
{
    T temp;

    temp = n1;
    n1 = n2;
    n2 = temp;
}

#endif