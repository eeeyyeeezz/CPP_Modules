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
	Fixed(int value);
	~Fixed();
	int	getRawBits(void)	const;
		
};

#endif
