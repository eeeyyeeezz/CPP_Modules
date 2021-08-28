#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "ClapTrap default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "ClapTrap copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::~ClapTrap() { std::cout << RED << "Destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

// std::string ClapTrap::getName() { return (this->name); }
// int			ClapTrap::getHitpoints() { return (this->hitPoints); }
// int			ClapTrap::getEnergyPoints() { return (this->energyPoints); }
// int			ClapTrap::getAttackDamage() { return (this->attackDamage); }

void ClapTrap::attack(std::string const &target){
	std::cout << WHITE << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " attack damage! (ง ͠° ͟ل͜ ͡°)ง" << NORMAL << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount){
	int	temp = this->hitPoints;
	this->hitPoints -= ammount;
	std::cout << GRAY << "ClapTrap " << this->name << " with " << temp << " hitpoints, takes damage! Total hitPoints: " << this->hitPoints << NORMAL;
	if (this->hitPoints <= 0){
		std::cout << BLACK_RED << "\nClapTrap " << this->name << " is DEAD! 	(ಥ_ʖಥ)\n";
		this->hitPoints = 0;
	}
	else
		std::cout << std::endl;  
} 

void ClapTrap::beRepaired(unsigned int ammount){
	this->hitPoints += ammount;
	std::cout << PURPLE << "Claptrap " << this->name << " is healed on " << ammount << " points! Total hp: " << this->hitPoints << " ( ͡° ͜ʖ ͡°)" << NORMAL << std::endl;
}