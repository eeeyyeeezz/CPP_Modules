#ifndef INTERN
#define INTERN
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	private:
	std::string		formArray[3];
	Form *(Intern::*func[3])(std::string target);
	
	public:
	Intern();
	Intern(Intern const &Intern);
	~Intern();
	Intern &operator=	(const Intern &intern);
	
	Form *newShrubbery(std::string target);
	Form *newRobotomy(std::string target);
	Form *newPresident(std::string target);
	Form *makeForm(std::string form, std::string target);
	
	class	FormNotFound : public std::exception{
		const	char *what	() const throw();
	};
	
};


#endif