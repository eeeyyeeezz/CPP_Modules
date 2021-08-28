#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	ClapTrap::name += "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << BLUE << "DiamondTrap default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) { *this = diamondtrap; }

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") { 
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << BLUE << "DiamondTrap copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &diamondtrap) {
	if (this == &diamondtrap)
		return *this;
	this->name = diamondtrap.name;
	this->hitPoints = diamondtrap.hitPoints;
	this->energyPoints = diamondtrap.energyPoints;
	this->attackDamage = diamondtrap.attackDamage;
	std::cout << RED << "DiamondTrap operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

void		DiamondTrap::attack(std::string const &target) { ScavTrap::attack(target); }

void		DiamondTrap::whoAmI() { 
	std::cout << BLUE << "beepboop i'm DIamOndDDD Trap ℃ↂ_ↂ NaMe: " << 
	this->name << " hitpoints: " << this->hitPoints << "\nenergyPoints: " << 
	this->energyPoints << " attackDamage: " << this->attackDamage << NORMAL << 
	std::endl; 
}

FragTrap::~FragTrap() { std::cout << RED << "DiamondTrap destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }
