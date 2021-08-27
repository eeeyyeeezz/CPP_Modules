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
	Fixed(Fixed const &fixed);
	~Fixed();

	// operator's overload start
	Fixed	&operator=	(const Fixed &fixed);
	bool	operator==	(const Fixed &fixed) const;
	bool	operator!=	(const Fixed &fixed) const;
	bool	operator>	(const Fixed &fixed) const;
	bool	operator<	(const Fixed &fixed) const;
	bool	operator>=	(const Fixed &fixed) const;
	bool	operator<=	(const Fixed &fixed) const;
	Fixed	operator+	(const Fixed &fixed) const;
	Fixed	operator-	(const Fixed &fixed) const;
	Fixed	operator*	(const Fixed &fixed) const;
	Fixed	operator/	(const Fixed &fixed) const;
	Fixed	&operator++	();
	Fixed	operator++	(int);
	Fixed	&operator--	();
	Fixed	operator--	(int);
	
	// operator's overload end
	
	const	Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
	const	Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
	int		toInt(void) const;
	float	toFloat(void) const; 
	void	setRawBits(int const raw);
	int		getRawBits(void)	const;
		
};

Fixed	&min(Fixed &fixed1, Fixed &fixed2);
Fixed	&min(Fixed &fixed1, Fixed &fixed2);
std::ostream &operator<< (std::ostream &out, Fixed const& fixed);

#endif
