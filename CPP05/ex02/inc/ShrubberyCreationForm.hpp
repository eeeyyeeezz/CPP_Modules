#ifndef SHRUBBERY
#define SHRUBBERY
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Shrubbery : public Form{
	public:	
	Shrubbery(std::string target);
	Shrubbery(Shrubbery const &shrubbery);
	~Shrubbery();
	Shrubbery &operator=	(const Shrubbery &shrubbery);
};

#endif