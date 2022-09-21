#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Form
{
private:
    const std::string   _name;
    bool                _signAble;
    const int           _signGrade;
    const int           _executeGrade;
    Form();
public:
    Form(const std::string& name);
    Form(const std::string& name, const int& signGrade);
    Form(const std::string& name, const int& executeGrade);
    Form(const std::string& name, const unsigned int& signGrade, const unsigned int& executeGrade);
    Form(const Form& dummy);
    virtual ~Form();
    Form& operator = (const Form& dummy);

    const std::string& getName();
    const bool& getSignAble();
    const int& getSignGrade();
    const int& getExecuteGrade();

    void beSigned();

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
}

std::ostream& operator << (std::ostream& out, const Form::Form& dummy);

#endif