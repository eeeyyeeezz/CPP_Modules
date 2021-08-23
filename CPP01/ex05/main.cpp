#include "Karen.hpp"

int		main(){
	Karen	Karen;
	
	std::cout << RED << "First\n";
	Karen.complain("debug");
	std::cout << RED << "Second\n";
	Karen.complain("info");
	std::cout << RED << "Third\n";
	Karen.complain("warning");
	std::cout << RED << "Fourth\n";
	Karen.complain("error");	
}
