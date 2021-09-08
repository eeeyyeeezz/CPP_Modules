#ifndef ROBOTOMY
#define ROBOTOMY
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyForm : public Form{
	public:
	RobotomyForm(std::string target);
	RobotomyForm(RobotomyForm const &robotomyform);
	~RobotomyForm();
	RobotomyForm &operator=	(const RobotomyForm &robotomyform);
	
	virtual void		execute(Bureaucrat const &executor) const;
	virtual void		action() const;
};

#endif