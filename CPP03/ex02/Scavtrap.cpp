#include "Scavtrap.hpp"

ScavTrap::ScavTrap(){ 
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << BLUE << "ScavTrap default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;	
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << BLUE << "ScavTrap copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavtrap) {
	if (this == &scavtrap)
		return *this;
	this->name = scavtrap.name;
	this->hitPoints = scavtrap.hitPoints;
	this->energyPoints = scavtrap.energyPoints;
	this->attackDamage = scavtrap.attackDamage;
	std::cout << RED << "ScavTrap operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

// ScavTrap &ScavTrap(const ScavTrap &scavtrap) { }

void		ScavTrap::guardGate(){ std::cout << BLUE << "ScavTrap " << this->name << " is on guardGate mode!!\n" << NORMAL; }

ScavTrap::~ScavTrap() { std::cout << RED << "ScavTrap destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }