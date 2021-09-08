#ifndef FORMCLASS
#define FORMCLASS
#include "Bureaucrat.hpp"

class Form{
	private:
	const std::string	name;
	const int			grade_exec;
	const int			grade_sign;
	bool				is_signed;
	
	public:	
	Form();
	Form(const std::string name, const int grade_exec, const int grade_sign);
	Form(Form const &Form);
	~Form();
	Form &operator=	(const Form &Form);
	
	const std::string	getName();
	const int			getGradeExec();
	const int			getGradeSign();
	const bool			getBool();
	void				beSigned(Bureaucrat &bureaucrat);
	
	class	GradeTooHigh : public std::exception{
		const	char *what	() const throw();
	};

	class	GradeTooLow : public std::exception{
		const	char *what	() const throw();
	};
	
};

std::ostream &operator<< (std::ostream &out, const Form &form);


#endif