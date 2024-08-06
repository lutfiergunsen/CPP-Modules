#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <fstream>

class RobotomyRequestForm : public AForm
{
    public:
    	RobotomyRequestForm();
    	RobotomyRequestForm(std::string target);
    	RobotomyRequestForm(RobotomyRequestForm const &src);
    	virtual ~RobotomyRequestForm();
    	RobotomyRequestForm &operator=(RobotomyRequestForm scf);

    	virtual void executeForm() const;
};

#endif
