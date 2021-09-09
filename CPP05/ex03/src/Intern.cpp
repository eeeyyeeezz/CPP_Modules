#include "../inc/Intern.hpp"

Intern::Intern() {
	this->formArray[0] = "shrubbery request";
	this->formArray[1] = "robotomy request";
	this->formArray[2] = "presidential request";
	
	this->func[0] = &Intern::newShrubbery;
	this->func[1] = &Intern::newRobotomy;
	this->func[2] = &Intern::newPresident;
	
	std::cout << BLUE << "Intern default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Intern::Intern(Intern const &intern) { *this = intern; }

Form *Intern::newShrubbery(std::string target) { return (new Shrubbery(target)); }

Form *Intern::newRobotomy(std::string target) { return (new RobotomyForm(target)); }

Form *Intern::newPresident(std::string target) { return (new PresidentForm(target)); }

Form *Intern::makeForm(std::string form, std::string target){
	for (int i = 0; i < 3; i++){
		if (form == this->formArray[i]){
			std::cout << BRIGHT_GREEN << "Intern creates " << form << " (✿◠‿◠)\n" << NORMAL;	
			return ((this->*func[i])(target));
		}
	}
	throw Intern::FormNotFound();
}

const		char *Intern::FormNotFound::what() const throw(){
	return ("Form not found (⩺_⩹)");
}

Intern &Intern::operator= (const Intern &intern) {
	if (this == &intern)
		return *this;
	{
		this->formArray[0] = intern.formArray[0];
		this->formArray[1] = intern.formArray[1];
		this->formArray[2] = intern.formArray[2];
	
		this->func[0] = intern.func[0];
		this->func[1] = intern.func[1];
		this->func[2] = intern.func[2];
			
	}
	std::cout << RED << "Intern operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Intern::~Intern() { std::cout << RED << "Intern destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
