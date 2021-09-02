#include "../inc/Animals.hpp"

Cat::Cat() { std::cout << BLUE << "Cat default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Cat::Cat(std::string name){ 
	this->type = name;
	std::cout << BLUE << "Cat copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Cat::Cat(Cat const &Cat) { *this = Cat; }

Cat &Cat::operator= (const Cat &Cat) {
	if (this == &Cat)
		return *this;
	this->type = Cat.type;
	std::cout << RED << "Cat operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Cat::~Cat() { std::cout << RED << "Cat destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string			Cat::getType() const { return(this->type); }

void		Cat::makeSound() const { std::cout << GREEN << "MEEEEEEEEOOOOOOWWWWWw\n"; }