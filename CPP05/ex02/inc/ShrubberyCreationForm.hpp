#ifndef SHRUBBERY
#define SHRUBBERY
#include "Bureaucrat.hpp"
#include <fstream>
#include "Form.hpp"

class Shrubbery : public Form{
	public:	
	Shrubbery(std::string target);
	Shrubbery(Shrubbery const &shrubbery);
	~Shrubbery();
	Shrubbery &operator=	(const Shrubbery &shrubbery);
	
	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action() const;
};

#endif