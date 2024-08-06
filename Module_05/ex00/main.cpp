#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "test 1" << std::endl;
	try {
        Bureaucrat B("Ahmet", 3);
        Bureaucrat B2;
        std::cout << B << std::endl;
        std::cout << B2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Too High Exception" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Too Low Exception" << std::endl;
    }
}
