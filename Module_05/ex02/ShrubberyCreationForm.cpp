#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137){
	this->setFormTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()){
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm scf){
	this->setIsSigned(scf.getIsSigned());
	this->setFormTarget(scf.getFormTarget());
	return (*this);
}

void ShrubberyCreationForm::executeForm() const{
	std::string target = this->getFormTarget();
	std::ofstream outFile(target + "_shrubbery");
	if (!outFile){
		std::cerr << "can't open/create" << this->getFormTarget() + "_shrubbery" << std::endl;
		return;
	}
	outFile << "            # #### ####\n"
			   "        ### \\/#|### |/####\n"
			   "        ##\\/#/ \\||/##/_/##/_#\n"
			   "       ###  \\/###|/ \\/ # ###\n"
			   "    ##_\\_#\\_\\## | #/###_/_####\n"
			   "    ## #### # \\ #| /  #### ##/##\n"
			   "    __#_--###`  |{,###---###-~\n"
			   "                \\ }{\n"
			   "                }}{\n"
			   "                }}{\n"
			   "          ersen {{}\n"
			   "        , -=-~{ .-^- _\n"
			   "                `}\n"
			   "                 {"
			<< std::endl;	
}
