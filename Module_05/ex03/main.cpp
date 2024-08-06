#include "iostream"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "test 1" << std::endl;
	try{
		Intern Intern1;
		AForm* F1;

		F1 = Intern1.makeForm("robotomy request", "Zidane");
		std::cout << *F1 << std::endl;
		F1->executeForm();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}
