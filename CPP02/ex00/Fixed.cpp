#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << BLUE << "Constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
}

Fixed::Fixed(int value) : value(value){
	std::cout << BLUE << "Constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
}

Fixed::~Fixed(){ 
	std::cout << RED << "Destructor called! (☞ ͡° ͜ʖ ͡°)☞" << NORMAL << std::endl;
	
}

int			Fixed::getRawBits() const { return (this->value); }

