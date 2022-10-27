#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
private:
    T*  _array;
    unsigned int _n;
public:
    Array()
    : _array(nullptr)
    {}

    Array(int n)
    : _array(new T[n]), _n(n)
    {}

    ~Array()
    {
        if (this->_array != nullptr)
            delete [] this->_array;
        this->_array = nullptr;
    }

    Array(const Array& dummy)
    {
        *this = dummy;
    }

    Array& operator = (const Array& dummy)
    {
        this->_array = new T[dummy._n];
        this->_n = dummy._n;
        for (unsigned int i = 0; i < this->_n; i++)
            this->_array[i] = dummy._array[i];
        return (*this);
    }

    class GradeInvalIndexException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("invalid index");
        }
    };

    T& operator [] (unsigned int idx)
    {
        if (this->_array == nullptr || idx >= _n || idx < 0)
            throw GradeInvalIndexException();
        return (this->_array[idx]);
    }

    const int& size() const 
    {
        return (_n);
    }
};

#endif