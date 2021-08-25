#include "Fixed.hpp"

int		main(){
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	
	// a = b;
	a = Fixed(1234.4321f);
	
	std::cout << WHITE << "a is : " << a << NORMAL << std::endl;
	std::cout << WHITE << "b is : " << b << NORMAL << std::endl;
	std::cout << WHITE << "c is : " << c << NORMAL << std::endl;
	std::cout << WHITE << "d is : " << d << NORMAL << std::endl;
	
	std::cout << WHITE << "a is : " << a.toInt() << " as int" << NORMAL << std::endl;
	std::cout << WHITE << "b is : " << b.toInt() << " as int" << NORMAL << std::endl;
	std::cout << WHITE << "c is : " << c.toInt() << " as int" << NORMAL << std::endl;
	std::cout << WHITE << "d is : " << d.toInt() << " as int" << NORMAL << std::endl;
	
	return (0);
}