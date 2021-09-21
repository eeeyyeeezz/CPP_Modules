#include "../inc/Form.hpp"

Form::Form(Form const &form) : name(form.name), grade_exec(form.grade_exec), grade_sign(form.grade_sign), is_signed(form.is_signed) { *this = form; }

Form::Form(const std::string name, std::string target, const int grade_exec, const int grade_sign) : 
name(name), target(target), grade_exec(grade_exec), grade_sign(grade_sign) { 
	std::cout << BLUE << "Form copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

Form::Form(const std::string name, const int grade_exec, const int grade_sign) : name(name), grade_exec(grade_exec), grade_sign(grade_sign) { 
	std::cout << BLUE << "Form copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
	if (grade_exec < 1 || grade_sign < 1)
		throw Form::GradeTooHigh();
	// else if (grade_exec > 150 || grade_sign > 150)
	// 	throw Form::GradeTooHigh();
}

std::string				Form::getName() { return (this->name); }

std::string				Form::getTarget() const { return (this->target); }

int						Form::getGradeExec() { return (this->grade_exec); }

int						Form::getGradeSign() { return (this->grade_sign); }

bool					Form::getBool() { return (this->is_signed); }

void					Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->grade_sign){
		bureaucrat.signForm(*this);
		throw Form::GradeTooHigh();
	}
	else{
		bureaucrat.signForm(*this);
		this->is_signed = 1;
	}
}

void					Form::execute(Bureaucrat const &bureaucrat) const{
	if (!this->is_signed)
		throw Form::NotSigned();
	if (bureaucrat.getGrade() > this->grade_exec)
		throw Form::GradeTooHigh();
}

const		char *Form::NotSigned::what() const throw(){
	return ("Form is not signed ( ͠° ͟ʖ ͡°)");
}

// const		char *Form::GradeTooLow::what() const throw(){
// 	return ("Grade to sign or exec is too low ( ͠° ͟ʖ ͡°)");
// }

const		char *Form::GradeTooHigh::what() const throw(){
	return ("Grade too sign or exec is too high ۹( ÒہÓ )۶");
}

Form &Form::operator= (const Form &form) {
	if (this == &form)
		return *this;
	std::cout << RED << "Form operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

std::ostream &operator<< (std::ostream &out, Form &form){
	std::cout << WHITE << "Form name is: " << form.getName() << NORMAL << std::endl;
	std::cout << WHITE << "Grade to sign is: " << form.getGradeSign() << NORMAL << std::endl;
	std::cout << WHITE << "Grade to exec is: " << form.getGradeExec() << NORMAL << std::endl;
	std::cout << WHITE << "Is signed: " << form.getBool() << NORMAL << std::endl;
	return (out);
}

Form::~Form () { std::cout << RED << "Form destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;  }
