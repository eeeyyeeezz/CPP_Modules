#ifndef ABOBA
#define ABOBA
#include <iostream>
#include "../colors.hpp"

class Fixed{
	private:
	int						value;
	static	const	int		const_int = 13376666;
	
	
	public:
	Fixed();
	Fixed(Fixed const &fixed);
	~Fixed();
	void	setRawBits(int const raw);
	int		getRawBits(void)	const;
		
};

#endif
