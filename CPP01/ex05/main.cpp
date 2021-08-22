#include "Karen.hpp"

int		main(){
	Karen	Karen;
	
	std::cout << "First\n";
	Karen.complain("debug");
	std::cout << "Second\n";
	Karen.complain("info");
	std::cout << "Third\n";
	Karen.complain("warning");
	std::cout << "Fourth\n";
	Karen.complain("error");	
}