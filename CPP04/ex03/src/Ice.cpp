#include "../inc/Ice.hpp"

Ice::Ice() { std::cout << BLUE << "Ice default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Ice::Ice(std::string const &type) { std::cout << BLUE << "Ice copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Ice::Ice(const Ice &Ice) { *this = Ice; }

Ice::~Ice() { std::cout << RED << "Ice destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

Ice &Ice::operator=(const Ice &ice){
	if (this == &ice)
		return (*this);
	this->type = ice.type;
	return (*this);
}

std::string		const		&Ice::getType() const { return (this->type); }

void			Ice::use(ICharacter &target) { std::cout << WHITE << "* shoots an ice bolt at " << target.getName() << " *\n" << NORMAL; }