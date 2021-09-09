#include "../inc/PresidentialPardonForm.hpp"

PresidentForm::PresidentForm(std::string target) : Form("PresidentForm", target, 5, 25) { std::cout << BLUE << "PresidentForm copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }
 
PresidentForm::PresidentForm(PresidentForm const &presidentform) : Form(presidentform) { *this = presidentform; }

PresidentForm &PresidentForm::operator= (const PresidentForm &PresidentForm) {
	if (this == &PresidentForm)
		return *this;
	std::cout << RED << "PresidentForm operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

void		PresidentForm::action() const {
	std::cout << WHITE << this->getTarget() << " has been" << BRIGHT_GREEN << " pardoned! byyyy " << BLUE << "Zafod Beeblebrox ( ͡°👅 ͡°)\n" << NORMAL;
}

void		PresidentForm::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	this->action();
}

PresidentForm::~PresidentForm() { std::cout << RED << "PresidentForm destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
