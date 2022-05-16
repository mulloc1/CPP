#ifndef FORM_HPP
# define FORM_HPP

# include <iosteam>

class Form
{
private:
    const std::string   _name;
    bool                _signAble;
    const unsigned int  _signGrade;
    const unsigned int  _executeGrade;
public:
    Form();
    Form(const bool& signAble);
    Form(const Form& dummy);
    ~Form();
    Form& operator = (const Form& dummy);

    void signForm();
    void beSined();
}

#endif