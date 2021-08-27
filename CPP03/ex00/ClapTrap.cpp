#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "Default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::~ClapTrap() { std::cout << RED << "Destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string ClapTrap::getName() { return (this->name); }
int			ClapTrap::getHitpoints() { return (this->hitPoints); }
int			ClapTrap::getEnergyPoints() { return (this->energyPoints); }
int			ClapTrap::getAttackDamage() { return (this->attackDamage); }

void ClapTrap::attack(std::string const &target){
	std::cout << BLACK_RED << "ClapTrap " << ClapTrap::getName() << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " attack damage! (ง ͠° ͟ل͜ ͡°)ง" << NORMAL << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount){
	(void)ammount;
}

void ClapTrap::beRepaired(unsigned int ammount){
	(void)ammount;
}