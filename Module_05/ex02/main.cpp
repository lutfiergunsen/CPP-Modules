#include "iostream"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << std::endl << "Test 1" << std::endl;
	{
		PresidentialPardonForm P("PresidentialPardon");
		Bureaucrat B1("Bureaucrat1", 5);
		Bureaucrat B2("Bureaucrat2", 6);

		B1.signForm(P);
		B2.signForm(P);

		B1.executeForm(P);
		B2.executeForm(P);
	}
}
