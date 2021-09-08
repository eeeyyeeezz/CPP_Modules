#include "inc/PresidentialPardonForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"

int		main(){
	PresidentForm	President("Mr.President");
	RobotomyForm	Robot("ROBO");
	Shrubbery		Shrub("Kek");
	Bureaucrat Putin("Putin", 1);
	Bureaucrat Navalny("Navalny", 150);
	Bureaucrat Shulman("Shulman", 50);	
		
	try{	
		std::cout << President;
		President.beSigned(Putin);
		Putin.executeForm(President);		
		President.beSigned(Navalny);
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		std::cout << Robot;
		Robot.beSigned(Shulman);
		Putin.executeForm(Robot);
		Shulman.executeForm(Robot);
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		std::cout << Shrub;
		Shrub.beSigned(Shulman);
		Shulman.executeForm(Shrub);		
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
}