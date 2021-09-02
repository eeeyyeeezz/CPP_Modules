#include "../inc/Animals.hpp"

Cat::Cat() : Animal() {
	std::cout << BLUE << "Cat default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
	this->brain = new Brain();
}

Cat::Cat(std::string name) : Animal(name) { 
	this->type = name;
	this->brain = new Brain();
	std::cout << BLUE << "Cat copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Cat::Cat(Cat const &Cat) { *this = Cat; }

Cat &Cat::operator= (const Cat &cat) {
	if (this == &cat)
		return *this;
	if (this->brain)
		delete this->brain;
	this->type = cat.type;
	this->brain = new Brain();
	this->brain = cat.brain;
	std::cout << RED << "Cat operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Cat::~Cat() { 
	std::cout << RED << "Cat destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; 
	delete this->brain;
}


std::string			Cat::getType() const { return(this->type); }

void		Cat::makeSound() const { std::cout << GREEN << "MEEEEEEEEOOOOOOWWWWWw\n"; }