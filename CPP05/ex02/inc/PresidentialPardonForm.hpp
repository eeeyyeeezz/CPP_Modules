#ifndef PRESIDENT
#define PRESIDENT
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentForm : public Form{
	public:	
	PresidentForm(std::string target);
	PresidentForm(PresidentForm const &presidentform);
	~PresidentForm();
	PresidentForm &operator=	(const PresidentForm &presidentform);
};

#endif