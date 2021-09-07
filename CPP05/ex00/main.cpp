#include "Bureaucrat.hpp"

int		main(){
	try{
		Bureaucrat bobby("bobby", 1);

	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << exc.what() << NORMAL << std::endl; }
}