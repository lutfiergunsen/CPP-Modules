#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5){
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5){
	this->setFormTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()){
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm scf){
	this->setIsSigned(scf.getIsSigned());
	this->setFormTarget(scf.getFormTarget());
	return (*this);
}

void PresidentialPardonForm::executeForm() const{
	std::cout << this->getFormTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
