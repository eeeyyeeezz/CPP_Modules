#ifndef FORMCLASS
#define FORMCLASS
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form{
	private:
	std::string			name;
	std::string			target;
	const int			grade_exec;
	const int			grade_sign;
	bool				is_signed;
	
	public:	
	Form(const std::string name, const int grade_exec, const int grade_sign);
	Form(const std::string name, std::string target, const int grade_exec, const int grade_sign);
	Form(Form const &Form);
	~Form();
	Form &operator=	(const Form &Form);
	
	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action() const = 0;
	std::string			getName();
	std::string			getTarget() const;
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