#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typenaem T>
class Array
{
private:
    T* _array;
public:
    Array()
    : _array(nullptr)
    {}
    Array(unsigned int n)
    : _array(new T[n])
    {}
    Array(const Array& dummy)
    {

    }
    Array& operator = (const Array& dummy)
    {
        
    }

};

#endif