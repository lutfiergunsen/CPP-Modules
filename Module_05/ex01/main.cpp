#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl << "Test 1" << std::endl;
	try{
		Bureaucrat	B("Ahmet", 85);
		Form	f("Nufus Fotokopisi", 90, 80);
		B.signForm(f); 
		std::cout << f << std::endl;
		std::cout << B << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &obj){
        std::cerr << "Too High Exception" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &obj){
        std::cerr << "Too Low Exception" << std::endl;
	}
}
