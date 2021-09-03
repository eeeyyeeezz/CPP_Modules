#include "../inc/AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) { std::cout << BLUE << "AMateria default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;  }

AMateria::AMateria(const AMateria &amateria) { *this = amateria; }

std::string		const	&AMateria::getType() const { return (this->type); }

AMateria::~AMateria() { std::cout << RED << "AMateria destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

AMateria &AMateria::operator=(const AMateria &amateria){
	if (this == &amateria)
		return (*this);
	this->type = amateria.type;
	return (*this);
}
