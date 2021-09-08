#include "../inc/RobotomyRequestForm.hpp"

RobotomyForm::RobotomyForm(std::string target){
	this->name = target;
	std::cout << BLUE << "RobotomyForm copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
}

RobotomyForm::RobotomyForm(RobotomyForm const &RobotomyForm) { *this = RobotomyForm; }

RobotomyForm &RobotomyForm::operator= (const RobotomyForm &RobotomyForm) {
	if (this == &RobotomyForm)
		return *this;
	std::cout << RED << "RobotomyForm operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

RobotomyForm::~RobotomyForm() { std::cout << RED << "RobotomyForm destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
