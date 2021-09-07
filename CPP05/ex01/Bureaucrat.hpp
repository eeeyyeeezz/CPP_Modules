#ifndef BUREAUCRAT
#define BUREAUCRAT
#include "../colors.hpp"
#include <iostream>

class Bureaucrat{
	private:
	const std::string	name;
	int			grade;

	public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &bureaucrat);
	~Bureaucrat();
	Bureaucrat &operator=	(const Bureaucrat &bureaucrat);

	class	GradeTooHigh : public std::exception{
		const	char *what	() const throw();
	};

	class	GradeTooLow : public std::exception{
		const	char *what	() const throw();
	};

	void				decrementGrade();
	void				decrementGrade(int grade);
	void				incrementGrade();
	void				incrementGrade(int grade);
	int			getGrade() const;
	const	std::string	getName() const;
};

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif