#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"

int		main(){
	try{
		Bureaucrat	HenryFord("Henry Ford", 50);
		std::cout << HenryFord;
		Form		Ford("Ford", 20, 60);
		std::cout << Ford;
		Ford.beSigned(HenryFord);
		std::cout << Ford;
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		Bureaucrat	Loser("Loser", 150);
		std::cout << Loser;
		Form		Chad("Chad", 1, 1);
		std::cout << Chad;
		Chad.beSigned(Loser);
		std::cout << Chad;
	}
	catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		Form Whow("Whow", 200, 200);
		std::cout << Whow;
	}catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		Form howWW("hoWW", 0, 20);
		std::cout << howWW;
	}catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
}