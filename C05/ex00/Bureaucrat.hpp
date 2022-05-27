#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"

class Bureaucrat
{
private:
    std::string   _name;
    int           _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, const int& grade);
    Bureaucrat(const Bureaucrat& dummy);
    virtual ~Bureaucrat();
    Bureaucrat& operator = (const Bureaucrat& dummy);

    std::string const &getName() const;
    int getGrade();

    void increment(int grade);
    void decrement(int grade);

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

std::ostream& operator << (std::ostream& out, Bureaucrat& dummy);

#endif