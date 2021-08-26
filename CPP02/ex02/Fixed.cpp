#include "Fixed.hpp"

Fixed::Fixed() : value(0) { std::cout << BLUE << "Default constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl; }

Fixed::Fixed(const int value){ 
	this->value = value << this->const_int;
	std::cout << BLUE << "Copy constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl; 
}

Fixed::Fixed(const float value){ 
	this->value = roundf(value * (1 << this->const_int));
	std::cout << BLUE << "Copy constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl; 
}

Fixed::Fixed(Fixed const &fixed) : value(fixed.value) { std::cout << BLUE << "Copy constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl; }

Fixed::~Fixed(){ std::cout << RED << "Destructor called! (☞ ͡° ͜ʖ ͡°)☞" << NORMAL << std::endl; }

int			Fixed::getRawBits() const { return (this->value); }

void		Fixed::setRawBits(int const raw) { this->value = raw; }

int			Fixed::toInt() const { return (this->value >> this->const_int); }

float		Fixed::toFloat() const {
	float res = static_cast<float>(this->value) / (1 << this->const_int);
	return res;
}

Fixed &Fixed::operator= (const Fixed &obj){
	if (this == &obj)
		return *this;
	this->setRawBits(obj.getRawBits());
	std::cout << RED << "Operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Fixed Fixed::operator+ (const Fixed &fixed) const{ return (Fixed(this->toFloat() + fixed.toFloat())); }
Fixed Fixed::operator- (const Fixed &fixed) const{ return (Fixed(this->toFloat() - fixed.toFloat())); }
Fixed Fixed::operator* (const Fixed &fixed) const{ return (Fixed(this->toFloat() * fixed.toFloat())); }
Fixed Fixed::operator/ (const Fixed &fixed) const{ return (Fixed(this->toFloat() / fixed.toFloat())); }

// Fixed &Fixed::operator> (const Fixed &obj){
// }

// Fixed &Fixed::operator< (const Fixed &obj){
// }

// Fixed &Fixed::operator>= (const Fixed &obj){
// }

// Fixed &Fixed::operator<= (const Fixed &obj){
// }

// Fixed &Fixed::operator== (const Fixed &obj){
// }

// Fixed &Fixed::operator!= (const Fixed &obj){
// }

std::ostream &operator<< (std::ostream &out, Fixed const& fixed){
	out << fixed.toFloat();
	return out;
}