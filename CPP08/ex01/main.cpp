#include "span.hpp"

int		main(){
	Span				span(10);
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << " SPAN[10] VECTOR AFTER ADD NUMBER " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;

	span.addNumber(span);
	span.printVector();

	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE << "GET _size: [" << BLUE << span.getSize() << WHITE << "]" << NORMAL << std::endl;
	std::cout << WHITE << "SIZE VECTOR: [" << BLUE << span.getVectorSize() << WHITE << "]" << NORMAL << std::endl;
	
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << "     SORTED SPAN VECTOR      " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	span.sortVector();
	span.printVector();

	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE << "LONGEST SPAN: [" << BLUE << span.longestSpan() << WHITE << "]" NORMAL << std::endl;
	std::cout << WHITE << "SHORTEST SPAN: [" << BLUE << span.shortestSpan() << WHITE << "]" NORMAL << std::endl;


	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << "        INT VECTOR [1]       " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	Span		span_only(1);

	span_only.addNumber(500);
	span_only.printVector();
	try{
		std::cout << WHITE << "LONGEST SPAN: [" << BLUE << span_only.longestSpan() << WHITE << "]" NORMAL << std::endl;
		std::cout << WHITE << "SHORTEST SPAN: [" << BLUE << span_only.shortestSpan() << WHITE << "]" NORMAL << std::endl;
	}	catch (std::string exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }

	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << " INT VECTOR [2] MAX_INT MIN_INT " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	Span			maxInt(2);

	maxInt.addNumber(-2147483648);
	maxInt.addNumber(2147483647);
	maxInt.printVector();
	std::cout << WHITE << "LONGEST SPAN: [" << BLUE << maxInt.longestSpan() << WHITE << "]" NORMAL << std::endl;
	std::cout << WHITE << "SHORTEST SPAN: [" << BLUE << maxInt.shortestSpan() << WHITE << "]" NORMAL << std::endl;


	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << "        INT VECTOR [5]       " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	Span		intSpan(5);
	intSpan.addNumber(0);
	intSpan.addNumber(3);
	intSpan.addNumber(20);
	intSpan.addNumber(-50);
	intSpan.addNumber(42);

	intSpan.printVector();
	intSpan.sortVector();
	std::cout << WHITE << "LONGEST SPAN: [" << BLUE << intSpan.longestSpan() << WHITE << "]" NORMAL << std::endl;
	std::cout << WHITE << "SHORTEST SPAN: [" << BLUE << intSpan.shortestSpan() << WHITE << "]" NORMAL << std::endl;
	
	
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	std::cout << WHITE "[" RED << "   INT VECTOR [5] + ADD NUMBER  " << WHITE "]" NORMAL << std::endl;
	std::cout << WHITE"-------------------------------"NORMAL << std::endl;
	try {
		intSpan.addNumber(-400);
	}	catch (std::string exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }
}