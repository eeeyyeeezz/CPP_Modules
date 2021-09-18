#include "template.hpp"	
#define MAX_VAL 750

int main(){
    int a = 200;
	int b = 300;
	
	std::cout << WHITE << "a = " BLUE << a << WHITE << ", b = " << BLUE << b << NORMAL << std::endl;
	swap( a, b );
	std::cout << RED << "After swap...\n" << NORMAL;
	std::cout << WHITE << "a = " BLUE << a << WHITE << ", b = " << BLUE << b << NORMAL << std::endl << std::endl;
	
	std::cout << WHITE << "min( a, b ) = " << BLUE << ::min( a, b ) << std::endl;
	std::cout << WHITE << "max( a, b ) = " << BLUE << ::max( a, b ) << std::endl << std::endl;

	const float float_a = 50.250;
	const float float_b = -42.42;
	
	std::cout << WHITE << "float_a = " BLUE << float_a << WHITE << ", float_b = " << BLUE << float_b << NORMAL << std::endl;
	std::cout << WHITE << "min( float_a, float_b ) = " << BLUE << ::min( float_a, float_b ) << NORMAL << std::endl << std::endl;


	std::string c = "aboba1";
	std::string d = "aboba228";
	
	std::cout << WHITE << "string c = " BLUE << c << WHITE << ", string d = " << BLUE << d << NORMAL << std::endl;
	swap(c, d);
	std::cout << RED << "After swap...\n" << NORMAL;
	std::cout << WHITE << "string c = " BLUE << c << WHITE << ", string d = " << BLUE << d << NORMAL << std::endl << std::endl;
	
	std::cout << WHITE << "min( c, d ) = " << BLUE << ::min( c, d ) << std::endl;
	std::cout << WHITE << "max( c, d ) = " << BLUE << ::max( c, d ) << std::endl;
}