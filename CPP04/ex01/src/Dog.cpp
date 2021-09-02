#include "../inc/Animals.hpp"

Dog::Dog() : Animal() { 
	std::cout << BLUE << "Dog default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
	this->brain = new Brain();
}

Dog::Dog(std::string name){ 
	this->type = name;
	this->brain = new Brain();
	std::cout << BLUE << "Dog copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Dog::Dog(Dog const &Dog) : Animal(Dog) { *this = Dog; }

Dog &Dog::operator= (const Dog &dog) {
	if (this == &dog)
		return *this;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	this->brain = dog.brain;
	this->type = dog.type;
	std::cout << RED << "Dog operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Dog::~Dog() { std::cout << RED << "Dog destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string			Dog::getType() const { return(this->type); }

void		Dog::makeSound() const { std::cout << GREEN << "WOOOOOOOOFFFF WOF WOF WOOOOFOFOFOFOFO WOF!\n"; }