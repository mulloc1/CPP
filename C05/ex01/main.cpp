#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
    Bureaucrat b("jaebae", 150);
    Form f("jaebae sign", 50);

    f.beSigned(b);
    b.signForm(f);
    return (0);
}