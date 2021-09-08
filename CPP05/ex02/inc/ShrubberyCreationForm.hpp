#ifndef SHRUBBERY
#define SHRUBBERY
#include "Bureaucrat.hpp"

class Shrubbery{
	public:	
	Shrubbery(std::string target);
	Shrubbery(Shrubbery const &shrubbery);
	~Shrubbery();
	Shrubbery &operator=	(const Shrubbery &shrubbery);
};

#endif