#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
    	AForm *forms[3];
    public:
    	Intern();
    	Intern(Intern const &copy);
    	Intern &operator=(Intern const &src);
    	~Intern();

    	AForm *makeForm(std::string form, std::string target);
    	
		class FormNotFound : public std::exception{
    	    public:
    	    	const char *what() const throw();
    	};
};

#endif