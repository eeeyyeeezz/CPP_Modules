#include "inc/PresidentialPardonForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/Bureaucrat.hpp"
#include "inc/Intern.hpp"
#include "inc/Form.hpp"

int		main(){
	Intern		interPtr;
	Bureaucrat	Bobby("Bobby", 1);
	
	Form *shrub = interPtr.makeForm("shrubbery request", "home");
	Form *robot = interPtr.makeForm("robotomy request", "robot");
	Form *president = interPtr.makeForm("presidential request", "president");
	
	try{
		Form *notExist = interPtr.makeForm("kein", "kein!!");
		notExist->beSigned(Bobby);
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
	std::cout << std::endl;
	try{
		shrub->beSigned(Bobby);
		robot->beSigned(Bobby);
		president->beSigned(Bobby);
		Bobby.executeForm(*shrub);
		Bobby.executeForm(*robot);
		Bobby.executeForm(*president);
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }

}