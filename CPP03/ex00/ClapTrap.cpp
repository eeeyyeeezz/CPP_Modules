#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "ClapTrap default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::ClapTrap(const ClapTrap &claptrap) { *this = claptrap; }

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << BLUE << "ClapTrap copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

ClapTrap::~ClapTrap() { std::cout << RED << "Destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

void ClapTrap::attack(std::string const &target){
	if (this->energyPoints >= 5){
		std::cout << WHITE << this->name << " attacks " << target << ", causing " << this->attackDamage << " attack damage! (ง ͠° ͟ل͜ ͡°)ง" << NORMAL << std::endl;
		this->energyPoints -= 5;
	}
	else	
		std::cout << BLACK_RED << "Energy points low! Pls, repair ( ͠° ͟ ͜ʖ ͡ ͠°)\n" << NORMAL;
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
	this->energyPoints += 10;
	std::cout << PURPLE << "Claptrap " << this->name << " is healed on " << ammount << " points! Total hp: " << this->hitPoints << " ( ͡° ͜ʖ ͡°)" << NORMAL << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &claptrap) {
	if (this == &claptrap)
		return *this;
	this->name = claptrap.name;
	this->hitPoints = claptrap.hitPoints;
	this->energyPoints = claptrap.energyPoints;
	this->attackDamage = claptrap.attackDamage;
	std::cout << RED << "ClapTrap operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}