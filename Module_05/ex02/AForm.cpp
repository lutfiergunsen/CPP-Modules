#include "AForm.hpp"

AForm::AForm(): Name("Null"), isSigned(false), GradeToSign(1), GradeToExecute(1) {
}

AForm::AForm(std::string Name, int sign, int exc) : Name(Name), GradeToSign(sign), GradeToExecute(exc){
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw  AForm::GradeTooLowException();
    this->isSigned = false;
}

AForm::AForm(const AForm &temp): Name(temp.Name), isSigned(temp.isSigned), GradeToSign(temp.GradeToSign), GradeToExecute(temp.GradeToExecute) {
    *this = temp;
}

AForm::~AForm(){
}

int AForm::getSign() const {
    return (this->GradeToSign);
}

int AForm::getExecute() const {
    return (this->GradeToExecute);
}

std::string AForm::getName() const {
    return (this->Name);
}

bool    AForm::getIsSigned() const {
    return (this->isSigned);
}

AForm    &AForm::operator=(const AForm &temp){
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = temp.isSigned;
    return *this;
}

void    AForm::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() > this->getSign())
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}

std::ostream    &operator<<(std::ostream &o, const AForm &temp){
    o << "Form name ->	" << temp.getName() << std::endl
      << "is signed ->	" << (temp.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign ->	" << temp.getSign() << std::endl
      << "greade to execute ->	" << temp.getExecute() << std::endl;
    return (o);
}

const char  *AForm::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char  *AForm::GradeTooLowException::what() const throw(){
    return ("Grade Too Low");
}

void AForm::setIsSigned(bool signedResult){
	this->isSigned = signedResult;
}

int AForm::getSignGrade(void) const{
	return (this->GradeToSign);
}

int AForm::getExecGrade(void) const{
	return (this->GradeToExecute);
}

std::string AForm::getFormTarget() const{
	return (this->target);
}

void AForm::setFormTarget(std::string target){
	this->target = target;
}

void AForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned()){
		std::cout << "<" << this->getName() << "> cannot be executed by <" << executor.getName()
		<< "> because the for is not signed" << std::endl;
		return ;
	}
	executeForm();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
