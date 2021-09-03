#ifndef BUREAUCRAT
#define BUREAUCRAT
#include "../colors.hpp"
#include <iostream>

class Bureaucrat{
	private:
	const std::string	name;
	const int			grade;

	public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(Bureaucrat const &bureaucrat);
	virtual ~Bureaucrat();
	Bureaucrat &operator=	(const Bureaucrat &bureaucrat);

};

#endif