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

Fixed &Fixed::operator= (const Fixed &fixed) {
	if (this == &fixed)
		return *this;
	this->setRawBits(fixed.getRawBits());
	std::cout << RED << "Operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Fixed	Fixed::operator+	(const Fixed &fixed) const{ return (Fixed(this->toFloat() + fixed.toFloat())); }
Fixed	Fixed::operator-	(const Fixed &fixed) const{ return (Fixed(this->toFloat() - fixed.toFloat())); }
Fixed	Fixed::operator*	(const Fixed &fixed) const{ return (Fixed(this->toFloat() * fixed.toFloat())); }
Fixed	Fixed::operator/	(const Fixed &fixed) const{ return (Fixed(this->toFloat() / fixed.toFloat())); }
bool	Fixed::operator==	(const Fixed &fixed) const{ return (this->value == fixed.value); }
bool	Fixed::operator!=	(const Fixed &fixed) const{ return (this->value != fixed.value); }
bool	Fixed::operator>	(const Fixed &fixed) const{ return (this->value > fixed.value); }
bool	Fixed::operator<	(const Fixed &fixed) const{ return (this->value < fixed.value); }
bool	Fixed::operator>=	(const Fixed &fixed) const{ return (this->value >= fixed.value); }
bool	Fixed::operator<=	(const Fixed &fixed) const{ return (this->value <= fixed.value); }

Fixed	&Fixed::operator++ (){ 
	this->setRawBits(++this->value);
	return (*this);
}
Fixed	Fixed::operator++ (int){ 
	Fixed	temp(*this);
	++(*this);
	return (temp);
}
Fixed	&Fixed::operator--(){ 
	this->setRawBits(--this->value);
	return (*this);
}
Fixed	Fixed::operator-- (int){
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

const	Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b ? a : b); }
const	Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b ? a : b); }

Fixed 	&min(Fixed &a, Fixed &b) { return (a < b ? a : b); }
Fixed 	&max(Fixed &a, Fixed &b) { return (a < b ? a : b); }

std::ostream &operator<< (std::ostream &out, Fixed const& fixed){
	out << fixed.toFloat();
	return out;
}