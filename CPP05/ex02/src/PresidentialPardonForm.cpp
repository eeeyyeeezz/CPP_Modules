#include "../inc/PresidentialPardonForm.hpp"

PresidentForm::PresidentForm(std::string target){
	this->name = target;
	std::cout << BLUE << "PresidentForm copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
}
 
PresidentForm::PresidentForm(PresidentForm const &PresidentForm) { *this = PresidentForm; }

PresidentForm &PresidentForm::operator= (const PresidentForm &PresidentForm) {
	if (this == &PresidentForm)
		return *this;
	std::cout << RED << "PresidentForm operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

PresidentForm::~PresidentForm() { std::cout << RED << "PresidentForm destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
