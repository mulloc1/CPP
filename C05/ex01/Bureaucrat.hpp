#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string& name, const int& grade);
    Bureaucrat(const Bureaucrat& dummy);
    ~Bureaucrat();
    Bureaucrat& operator = (const Bureaucrat& dummy);

    std::string const &getName() const;
    int getGrade() const;

    void increment(const int& grade);
    void decrement(const int& grade);

    void signForm(bool sign, std::string formName);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& dummy);

#endif