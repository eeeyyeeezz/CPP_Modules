#ifndef PRESIDENT
#define PRESIDENT
#include "Bureaucrat.hpp"

class PresidentForm{
	public:	
	PresidentForm(std::string target);
	PresidentForm(PresidentForm const &presidentform);
	~PresidentForm();
	PresidentForm &operator=	(const PresidentForm &presidentform);
};

#endif