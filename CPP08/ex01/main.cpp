#include "span.hpp"

int		main(){
	srand(time(0));
	Span				span(10);
	
	std::vector<int>			intArray;
	for (int i = 0; i < 10; i++)
		intArray.push_back(std::rand() % 500);
	std::vector<int>::iterator	begin = intArray.begin();
	std::vector<int>::iterator	end = intArray.end();
	for (; begin != end; begin++)
		std::cout << WHITE << "RANDOM INT[5] VECTOR: [" << BLUE << *begin << WHITE << "]" << NORMAL << std::endl; 
	begin = intArray.begin();
	end = intArray.end() - 1;
	std::cout << WHITE"---------------------------"NORMAL << std::endl;

	span.addNumber(begin, end);
	span.addNumber(-30);
	span.printVector();

	std::cout << WHITE"---------------------------"NORMAL << std::endl;
	std::cout << WHITE << "GET _size: [" << BLUE << span.getSize() << WHITE << "]" << NORMAL << std::endl;
	std::cout << WHITE << "SIZE VECTOR: [" << BLUE << span.getVectorSize() << WHITE << "]" << NORMAL << std::endl;
	
	std::cout << WHITE"---------------------------"NORMAL << std::endl;



	// try {
	// 	span.addNumber(-400);
	// }	catch (std::string exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }
}