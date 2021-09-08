#ifndef FORMCLASS
#define FORMCLASS
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form{
	protected:
	std::string name;
	
	private:
	const int			grade_exec;
	const int			grade_sign;
	bool				is_signed;
	
	public:	
	Form();
	Form(const std::string name, const int grade_exec, const int grade_sign);
	Form(Form const &Form);
	~Form();
	Form &operator=	(const Form &Form);
	
	void				execute(Bureaucrat const &executor) const;
	std::string			getName();
	bool				getBool();
	int					getGradeExec();
	int					getGradeSign();
	void				beSigned(Bureaucrat &bureaucrat);
	
	class	NotSigned : public std::exception{
		const	char *what	() const throw();
	};

	
	class	GradeTooHigh : public std::exception{
		const	char *what	() const throw();
	};

	class	GradeTooLow : public std::exception{
		const	char *what	() const throw();
	};
	
};

std::ostream &operator<< (std::ostream &out, Form &form);


#endif