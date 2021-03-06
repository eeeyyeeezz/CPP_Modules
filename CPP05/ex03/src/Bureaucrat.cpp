#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { std::cout << BLUE << "Bureaucrat default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) { 
	if (grade < 1)
		throw Bureaucrat::GradeTooLow();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHigh();
	std::cout << BLUE << "Bureaucrat copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) { *this = bureaucrat; }

int					Bureaucrat::getGrade() const { return (this->grade); }

const	std::string	Bureaucrat::getName() const { return (this->name); }

const		char *Bureaucrat::GradeTooHigh::what() const throw(){
	return ("Grade too high ( ͠° ͟ʖ ͡°)");
}

const		char *Bureaucrat::GradeTooLow::what() const throw(){
	return ("Grade too low ۹( ÒہÓ )۶");
}

void			Bureaucrat::decrementGrade(){ 
	this->grade += 1; 
	if (grade > 150)
		throw Bureaucrat::GradeTooLow();
}

void			Bureaucrat::decrementGrade(int grade){ 
	this->grade += grade; 
	if (grade > 150)
		throw Bureaucrat::GradeTooLow();
}

void			Bureaucrat::incrementGrade(){
	this->grade -= 1;
	if (grade < 1)
		throw Bureaucrat::GradeTooHigh();
}

void			Bureaucrat::incrementGrade(int grade){
	this->grade -= grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHigh();
}

void			Bureaucrat::signForm(Form &form){
	if (form.getGradeSign() > this->getGrade())
		std::cout << WHITE << "Bureaucrat " << BLUE << this->getName() << GREEN << " signs form " << WHITE << form.getName() << NORMAL << std::endl;
	else
		std::cout << WHITE << "Bureaucrat " << BLUE << this->getName() << RED << " can't sign form " << WHITE << form.getName() << NORMAL << std::endl;
		
}

void			Bureaucrat::executeForm(Form const &form){
	try{
		form.execute(*this);
		std::cout << BRIGHT_GREEN << "Execution is successful ( •̀ᴗ•́ )و\n";
	} catch (std::exception &exc) { std::cout << BLACK_RED << "EXECUTION ERROR IS: " << RED << exc.what() << NORMAL << std::endl; }
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &bureaucrat) {
	if (this == &bureaucrat)
		return *this;
	(std::string)this->name = bureaucrat.getName();
	this->grade = bureaucrat.getGrade();
	std::cout << RED << "Bureaucrat operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat){
	std::cout << WHITE << "Name is: " << bureaucrat.getName() << NORMAL << std::endl;
	std::cout << WHITE << "Grade is: " << bureaucrat.getGrade() << NORMAL << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat() { std::cout << RED << "Bureaucrat destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
