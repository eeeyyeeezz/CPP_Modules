#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << BLUE << "Default constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
}

Fixed::Fixed(Fixed const &fixed) : value(fixed.value) {
	std::cout << BLUE << "Copy constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
}

Fixed::~Fixed(){ 
	std::cout << RED << "Destructor called! (☞ ͡° ͜ʖ ͡°)☞" << NORMAL << std::endl;
}

Fixed &Fixed::operator= (const Fixed &obj){
	if (this == &obj)
		return *this;
	this->setRawBits(obj.getRawBits());
	std::cout << RED << "Operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

int			Fixed::getRawBits() const { 
	std::cout << YELLOW << "getRawBits function called! (˵ ͡o ͜ʖ ͡o˵)☞" << NORMAL << std::endl;
	return (this->value); 
}

void		Fixed::setRawBits(int const raw) { 
	std::cout << PURPLE << "setRawBits function called! ( •̀ᴗ•́ )و" << NORMAL << std::endl;
	this->value = raw; 
}
