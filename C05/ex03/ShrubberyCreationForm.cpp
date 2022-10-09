#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& dummy)
: Form("ShrubberyCreationForm", 145, 137), _target(dummy.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl; 
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& dummy)
{
    dummy.getName();
    return *this;
}

const std::string& ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->getExecuteGrade())
    {
        std::ofstream newFile(this->getTarget() + "_Shrubbery");
        newFile << "       _-_\n";
        newFile << "    /~~   ~~\\\n";
        newFile << " /~~         ~~\\\n";
        newFile << "{               }\n";
        newFile << " \\  _-     -_  /\n";
        newFile << "   ~  \\\\ //  ~\n";
        newFile << "_- -   | | _- _\n";
        newFile << "  _ -  | |   -_\n";
        newFile << "      // \\\n";
        newFile.close();
        return (true);
    }
    return (false);

}

std::ostream& operator << (std::ostream& out, const ShrubberyCreationForm& dummy)
{
    out << dummy.getName() << std::endl;
    return out;
}
