#include "Bureaucrat.hpp"

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

const		char *Bureaucrat::GradeTooLow::what() const throw(){
	return ("Grade too low ( ͠° ͟ʖ ͡°)");
}

const		char *Bureaucrat::GradeTooHigh::what() const throw(){
	return ("Grade too high ۹( ÒہÓ )۶");
}

void			Bureaucrat::decrementGrade(){ 
	this->grade -= 1; 
	if (grade < 1)
		throw Bureaucrat::GradeTooLow();
}

void			Bureaucrat::decrementGrade(int grade){ 
	this->grade -= grade; 
	if (grade < 1)
		throw Bureaucrat::GradeTooLow();
}

void			Bureaucrat::incrementGrade(){
	this->grade += 1
	;
	if (grade > 150)
		throw Bureaucrat::GradeTooHigh();
}

void			Bureaucrat::incrementGrade(int grade){
	this->grade += grade;
	if (grade > 150)
		throw Bureaucrat::GradeTooHigh();
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

Bureaucrat::~Bureaucrat() {   }
