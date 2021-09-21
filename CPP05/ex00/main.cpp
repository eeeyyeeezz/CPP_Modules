#include "Bureaucrat.hpp"

int		main(){
	try{
		Bureaucrat bobby("bobby", 1);
		std::cout << bobby;
		bobby.incrementGrade();
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try {
		Bureaucrat henry("henry", 150);
		std::cout << henry;
		henry.decrementGrade();	
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try {
		Bureaucrat jobie("jobie", 50);
		std::cout << jobie;
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }

}