#ifndef AFORM_HPP
# define AFORM_HPP

class AForm;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "iostream"

class AForm
{
    private:
        std::string const   Name;
        std::string	target;
        bool                isSigned;
        const int           GradeToSign;
        const int           GradeToExecute;
    public:
        AForm();
        AForm(std::string Name, int sign, int exc);
        AForm(const AForm &temp);
        virtual ~AForm();

        std::string		getName() const;
	    bool			getIsSigned() const;
	    void			setIsSigned(bool signedResult);
	    int				getSignGrade(void) const;
	    int				getExecGrade(void) const;
	    std::string		getFormTarget() const;
	    void			setFormTarget(std::string target);
        
        int getSign() const;
        int getExecute() const;

        AForm    &operator=(const AForm &obj);
        void    beSigned(Bureaucrat & bureaucrat);

        void			execute(Bureaucrat const &executor) const;
	    virtual void	executeForm() const = 0;
        virtual AForm *clone(std::string _target) = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, const AForm &obj);

#endif