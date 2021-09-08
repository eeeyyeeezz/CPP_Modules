#include "../inc/ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(std::string target) {  }
 
Shrubbery::Shrubbery(Shrubbery const &Shrubbery) { *this = Shrubbery; }

Shrubbery &Shrubbery::operator= (const Shrubbery &Shrubbery) {
	if (this == &Shrubbery)
		return *this;
	std::cout << RED << "Shrubbery operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Shrubbery::~Shrubbery() { std::cout << RED << "Shrubbery destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
