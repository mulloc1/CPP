#ifndef FORM_HPP
# define FORM_HPP

# include <iosteam>
# include <exception>

class Form
{
private:
    std::string   _name;
    bool          _signAble;
    unsigned int  _signGrade;
    unsigned int  _executeGrade;
public:
    Form();
    Form(const std::string& name, const unsigned int& signGrade, const unsigned int& executeGrade);
    Form(const Form& dummy);
    ~Form();
    Form& operator = (const Form& dummy);

    const std::string& getName();
    const bool& getSignAble();
    const unsigned int& getSignGrade();
    const unsigned int& getExecuteGrade();

    void setName(const std::string& name);
    void setSignAble(const bool& signAble);
    void setSignGrade(const unsigned int& signGrade);
    void setExecuteGrade(const unsigned int& executeGrade);

    void beSined();

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