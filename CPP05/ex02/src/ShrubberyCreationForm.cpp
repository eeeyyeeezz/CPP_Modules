#include "../inc/ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(std::string target) : Form("Shrubbery", target, 137, 145) {
	std::cout << BLUE << "Shrubbery copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
}

Shrubbery::Shrubbery(Shrubbery const &shrubbery) : Form(shrubbery) { *this = shrubbery; }

Shrubbery &Shrubbery::operator= (const Shrubbery &Shrubbery) {
	if (this == &Shrubbery)
		return *this;
	std::cout << RED << "Shrubbery operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

void		Shrubbery::action() const {
	std::ofstream ff;
	ff.open((this->getTarget() + "_shrubbery").c_str());
	if (!ff.is_open())
		std::cout << RED << "Fd error!\n";
	else{
		ff <<
		" 	      .\n" <<
		"    __/ \\__\n" <<
		"    \\     /\\\n" <<
		"    /.'o'.\\\n" <<
		"     .o.'.\n" <<
		"    .'.'o'.\n" <<
		"   o'.o.'.o.\n" <<
		"  .'.o.'.'.o.\n" <<	
		" .o.'.o.'.o.'.\n" <<
		"    [_____]\n" <<
		"     \\___/  \n";
		ff.close();
	}
}

void		Shrubbery::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	this->action();
}

Shrubbery::~Shrubbery() { std::cout << RED << "Shrubbery destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
