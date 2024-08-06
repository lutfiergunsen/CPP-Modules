#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45){
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45){
	this->setFormTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()){
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm scf){
	this->setIsSigned(scf.getIsSigned());
	this->setFormTarget(scf.getFormTarget());
	return (*this);
}

void RobotomyRequestForm::executeForm() const{
	srand(time(NULL));
	if (rand() % 2 == 0) {
		std::cout << "Bzzzztttt...." << std::endl;
		std::cout << this->getFormTarget() << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << this->getFormTarget() << " robotomy failed." << std::endl;
	}
}
