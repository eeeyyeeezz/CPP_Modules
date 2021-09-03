#include "../inc/Cure.hpp"

Cure::Cure() { std::cout << BLUE << "Cure default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Cure::Cure(std::string const &type) { std::cout << BLUE << "Cure copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Cure::Cure(const Cure &Cure) { *this = Cure; }

Cure::~Cure() { std::cout << RED << "Cure destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

Cure &Cure::operator=(const Cure &cure){
	if (this == &cure)
		return (*this);
	this->type = cure.type;
	return (*this);
}