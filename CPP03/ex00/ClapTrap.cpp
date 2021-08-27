#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "Default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::~ClapTrap() { std::cout << RED << "Destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string ClapTrap::getName() { return (this->name); }
int			ClapTrap::getHitpoints() { return (this->hitPoints); }
int			ClapTrap::getEnergyPoints() { return (this->energyPoints); }
int			ClapTrap::getAttackDamage() { return (this->attackDamage); }

void ClapTrap::attack(std::string const &target){
	std::cout << WHITE << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " attack damage! (ง ͠° ͟ل͜ ͡°)ง" << NORMAL << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount){
	std::cout << GRAY << "ClapTrap " << this->getName() << " takes damage! Total hitPoints :" << this->getHitpoints() - ammount << NORMAL;
	if (this->getHitpoints() - ammount <= 0)
		std::cout << BLACK_RED << "ClapTrap " << this->getName() << " is DEAD! 	(ಥ_ʖಥ)\n";
	else
		std::cout << std::endl;  
} 

void ClapTrap::beRepaired(unsigned int ammount){
	(void)ammount;
}