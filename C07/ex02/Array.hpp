#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
private:
    T*  _array;
    int _n;
public:
    Array()
    : _array(nullptr)
    {}

    Array(int n)
    : _array(new T[n]), _n(n)
    {}

    ~Array()
    {
        delete [] _array;
    }

    Array(const Array& dummy)
    {
        *this = dummy;
    }

    Array& operator = (const Array& dummy)
    {
        _array = new T[dummy._n];
        _n = dummy._n;
        for (int i = 0; i < _n; i++)
            _array[i] = dummy._array[i];
        return (*this);
    }

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("invalid index");
        }
    };

    T& operator [] (int idx)
    {
        if (_array == nullptr || idx >= _n || idx < 0)
            throw GradeTooHighException();
        return (_array[idx]);
    }

    T operator [] (int idx) const
    {
        if (_array == nullptr || idx >= _n || idx < 0)
            throw GradeTooHighException();
        return (_array[idx]);
    }

    int& size() const 
    {
        return (_n);
    }
};

#endif