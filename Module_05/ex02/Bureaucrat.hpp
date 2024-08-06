#ifndef BUREAUCRAT
# define BUREAUCRAT

class Bureaucrat;
class Form;
#include "iostream"
#include "AForm.hpp"

class	Bureaucrat
{
	private:
		std::string	Name;
		int			Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &obj);
		std::string	getName() const;
		int			getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
        void	signForm(AForm &form);
		void	executeForm(AForm const &form);

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif
