#include "Bureaucrat.hpp"

int		main(){
	try{
		Bureaucrat bobby("bobby", 1);
		std::cout << bobby;
		bobby.decrementGrade();
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try {
		Bureaucrat bobby("bobby", 150);
		std::cout << bobby;
		bobby.incrementGrade();	
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try {
		Bureaucrat bobby("bobby", 50);
		std::cout << bobby;
		// bobby.incrementGrade();	
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }

}