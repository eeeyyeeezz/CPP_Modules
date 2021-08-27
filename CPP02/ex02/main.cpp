#include "Fixed.hpp"

int		main(){
	Fixed		a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	Fixed		c(40);

	std::cout << WHITE << "IS A " << a << NORMAL << std::endl;
	std::cout << WHITE << "IS B " << b << NORMAL << std::endl;
	std::cout << WHITE << "IS ++A " << ++a << NORMAL << std::endl;
	std::cout << WHITE << "IS A " << a << NORMAL << std::endl;
	a++;
	std::cout << WHITE << "IS A++ " << a << NORMAL << std::endl;
	c++;
	std::cout << WHITE << "IS c++ " << c << NORMAL << std::endl;
	c++;
	std::cout << WHITE << "IS c++(again) " << c << NORMAL << std::endl;

	bool less = a < b;
	bool more = a > b;
	std::cout << WHITE << "A < B IS: " << less << std::endl;
	std::cout << WHITE << "A > B IS: " << more << std::endl;
	Fixed const fifty(48);
	Fixed const	fifty2(50);
	bool less_or_more = fifty <= fifty2;
	bool more_or_less = fifty >= fifty2;
	std::cout << WHITE << "fifty <= fifty2 IS: " << less_or_more << std::endl;
	std::cout << WHITE << "fifty >= fifty2 IS: " << more_or_less << std::endl;
	Fixed const equal(20.50f);
	Fixed const equal2(20.50f);
	bool equal_bool = equal == equal2;
	bool not_equal = equal != equal2;
	std::cout << WHITE << "equal == equal2 IS : " << equal_bool << std::endl;
	std::cout << WHITE << "equal != equal2 IS : " << not_equal << std::endl;


	return (0);
}