#include "../inc/Animals.hpp"

Animal::Animal() { std::cout << BLUE << "Animal default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Animal::Animal(std::string name) : type(name) { std::cout << BLUE << "Animal copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Animal::Animal(Animal const &animal) { *this = animal; }

Animal &Animal::operator= (const Animal &animal) {
	if (this == &animal)
		return *this;
	this->type = animal.type;
	std::cout << RED << "Animal operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

std::string			Animal::getType() const { return(this->type); }

Animal::~Animal() { std::cout << RED << "Animal destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

void		Animal::makeSound() const { std::cout << WHITE << "Bro no sound ( ͠° ͟ʖ ͡°)\n"; }
