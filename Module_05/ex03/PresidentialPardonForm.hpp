#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class PresidentialPardonForm : public AForm
{
    public:
    	PresidentialPardonForm();
    	PresidentialPardonForm(std::string target);
    	PresidentialPardonForm(PresidentialPardonForm const &src);
    	virtual ~PresidentialPardonForm();
    	PresidentialPardonForm &operator=(PresidentialPardonForm scf);

		virtual AForm *clone(std:: string target);
    	virtual void executeForm() const;
};

#endif
