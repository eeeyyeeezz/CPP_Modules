#include "../inc/RobotomyRequestForm.hpp"

RobotomyForm::RobotomyForm(std::string target) : Form("RobotomyForm", target, 45, 72) { std::cout << BLUE << "RobotomyForm copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

RobotomyForm::RobotomyForm(RobotomyForm const &robotomyform) : Form(robotomyform) { *this = robotomyform; }

RobotomyForm &RobotomyForm::operator= (const RobotomyForm &RobotomyForm) {
	if (this == &RobotomyForm)
		return *this;
	std::cout << RED << "RobotomyForm operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

void		RobotomyForm::action() const {
	srand(time(0));
	int rand = std::rand();

	if (rand % 2)
		std::cout << WHITE << this->getTarget() << " has been" << BRIGHT_GREEN << " successfully" << WHITE << " robotomized ( ★^O^★ )\n";
	else
		std::cout << WHITE << this->getTarget() << " has been" << BLACK_RED << " unsuccessfully" << WHITE << " robotomized (´-ι_-｀)\n";
}

void		RobotomyForm::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	this->action();
}


RobotomyForm::~RobotomyForm() { std::cout << RED << "RobotomyForm destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
