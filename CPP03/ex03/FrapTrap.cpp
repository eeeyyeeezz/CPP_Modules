#include "FragTrap.hpp"

FragTrap::FragTrap(){ 
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << BLUE << "FragTrap default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

FragTrap::FragTrap(const FragTrap &fragtrap) { *this = fragtrap; }

FragTrap::FragTrap(std::string name){
	this->name = name;	
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30	;
	std::cout << BLUE << "FragTrap copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

FragTrap &FragTrap::operator= (const FragTrap &fragtrap) {
	if (this == &fragtrap)
		return *this;
	this->name = fragtrap.name;
	this->hitPoints = fragtrap.hitPoints;
	this->energyPoints = fragtrap.energyPoints;
	this->attackDamage = fragtrap.attackDamage;
	std::cout << RED << "FragTrap operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

void		FragTrap::highFivesGuys() { std::cout << GREEN << "Damn, that highFive is so positive, guys (˵ ͡° ͜ʖ ͡°˵)\n" << NORMAL; }

FragTrap::~FragTrap() { std::cout << RED << "FragTrap destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }