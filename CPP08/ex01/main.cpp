#include "span.hpp"

int		main(){
	srand(time(0));
	Span				span(10);
	
	std::vector<int>			intArray;
	for (int i = 0; i < 10; i++)
		intArray.push_back((std::rand() % 50) - 25);
	std::vector<int>::iterator	begin = intArray.begin();
	std::vector<int>::iterator	end = intArray.end();
	for (; begin != end; begin++)
		std::cout << WHITE << "RANDOM INT[10] VECTOR: [" << BLUE << *begin << WHITE << "]" << NORMAL << std::endl; 
	begin = intArray.begin();
	end = intArray.end();
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << " SPAN VECTOR AFTER ADD NUMBER " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;

	span.addNumber(begin, end);
	span.printVector();

	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE << "GET _size: [" << BLUE << span.getSize() << WHITE << "]" << NORMAL << std::endl;
	std::cout << WHITE << "SIZE VECTOR: [" << BLUE << span.getVectorSize() << WHITE << "]" << NORMAL << std::endl;
	
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE << "LONGEST SPAN: [" << BLUE << span.longestSpan() << WHITE << "]" NORMAL << std::endl;
	// std::cout << WHITE << "SHORTEST SPAN: [" << BLUE << span.shortestSpan() << WHITE << "]" NORMAL << std::endl;
	


	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << "     SORTED SPAN VECTOR      " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	span.sortVector();
	span.printVector();


	// try {
	// 	span.addNumber(-400);
	// }	catch (std::string exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }
}