#ifndef FORMCLASS
#define FORMCLASS
#include "Bureaucrat.hpp"

class Form{
	Form();
	// Form(std::string const name, int grade);
	Form(Form const &Form);
	~Form();
	Form &operator=	(const Form &Form);
};

#endif