#include "../Animals.hpp"

WrongAnimal::WrongAnimal() { std::cout << BLUE << "WrongAnimal default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

WrongAnimal::WrongAnimal(std::string name) : type(name) { std::cout << BLUE << "WrongAnimal copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal) { *this = WrongAnimal; }

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &WrongAnimal) {
	if (this == &WrongAnimal)
		return *this;
	this->type = WrongAnimal.type;
	std::cout << RED << "WrongAnimal operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

std::string			WrongAnimal::getType() const { return(this->type); }

WrongAnimal::~WrongAnimal() { std::cout << RED << "WrongAnimal destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

void		WrongAnimal::makeSound() const { std::cout << WHITE << "Bro no sound (WrongAnimal) ( ͠° ͟ʖ ͡°)\n"; }
