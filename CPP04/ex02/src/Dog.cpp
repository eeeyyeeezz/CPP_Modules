#include "../inc/Animals.hpp"

Dog::Dog() : Animal() { std::cout << BLUE << "Dog default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Dog::Dog(std::string name){ 
	this->type = name;
	std::cout << BLUE << "Dog copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Dog::Dog(Dog const &Dog) : Animal(Dog) { *this = Dog; }

Dog &Dog::operator= (const Dog &Dog) {
	if (this == &Dog)
		return *this;
	this->type = Dog.type;
	std::cout << RED << "Dog operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Dog::~Dog() { std::cout << RED << "Dog destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string			Dog::getType() const { return(this->type); }

void		Dog::makeSound() const { std::cout << GREEN << "WOOOOOOOOFFFF WOF WOF WOOOOFOFOFOFOFO WOF!\n"; }