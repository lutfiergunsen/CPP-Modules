#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
    	ShrubberyCreationForm();
    	ShrubberyCreationForm(std::string target);
    	ShrubberyCreationForm(ShrubberyCreationForm const &src);
    	virtual ~ShrubberyCreationForm();
    	ShrubberyCreationForm &operator=(ShrubberyCreationForm scf);

    	virtual void executeForm() const;
};

#endif