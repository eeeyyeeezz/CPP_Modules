#include "Karen.hpp"

std::string		array[4] = {
	"debug",
	"info",
	"warning",
	"error"
};

typedef void(Karen::*karen_ptr) ();

void		Karen::debug(){
	std::cout << YELLOW << "I love to protect string functions.";
	std::cout << "I just love when nothing segfaults when it should!" << NORMAL << std::endl;
}

void		Karen::info(){
	std::cout << YELLOW << "I cannot believe adding extra features cost more money."; 
	std::cout << "You dont put enough code! If you did I would not have to ask for it!" << NORMAL << std::endl;
}

void		Karen::warning(){
	std::cout << YELLOW << "I think I deserve to have some extra features for free. ";
	std::cout << "I’ve been buing your software for years and you just started write code here last month." << NORMAL << std::endl;
	
}
void		Karen::error(){
	std::cout << YELLOW << "This is unacceptable. I want to speak to the adm now!" << NORMAL << std::endl;
}

void		Karen::complain(std::string level){
	karen_ptr	karen_ptr[4] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	int i = 0;
	while (i < 4 && array[i] != level){
		(this->*karen_ptr[i])();	
		i++;
	}
	(this->*karen_ptr[i])();	
}
