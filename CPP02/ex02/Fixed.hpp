#ifndef ABOBA
#define ABOBA
#include <iostream>
#include <math.h>
#include "../colors.hpp"

class Fixed{
	private:
	int						value;
	static	const	int		const_int = 8;
	
	public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	// operator's overload start
	Fixed	&operator= (const Fixed &fixed);
	// bool	&operator> (const Fixed &fixed);
	// bool	&operator< (const Fixed &fixed);
	// bool	&operator>= (const Fixed &fixed);
	// bool	&operator<= (const Fixed &fixed);
	// bool	&operator== (const Fixed &fixed);
	// bool	&operator!= (const Fixed &fixed);
	Fixed	&operator+ (const Fixed &fixed1, const Fixed &fixed2);
	Fixed	&operator- (const Fixed &fixed);
	Fixed	&operator* (const Fixed &fixed);
	Fixed	&operator/ (const Fixed &fixed);
	// operator's overload end
	Fixed(Fixed const &fixed);
	~Fixed();
	
	int		toInt(void) const;
	float	toFloat(void) const; 
	void	setRawBits(int const raw);
	int		getRawBits(void)	const;
		
};

std::ostream &operator<< (std::ostream &out, Fixed const& fixed);

#endif
