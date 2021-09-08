#ifndef ROBOTOMY
#define ROBOTOMY
#include "Bureaucrat.hpp"

class RobotomyForm{
	public:
	RobotomyForm(std::string target);
	RobotomyForm(RobotomyForm const &robotomyform);
	~RobotomyForm();
	RobotomyForm &operator=	(const RobotomyForm &robotomyform);
};

#endif