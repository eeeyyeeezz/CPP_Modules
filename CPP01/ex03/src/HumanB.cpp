#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void		HumanB::attack(){
	std::cout << RED << this->name << WHITE << " attack with his " << BLUE << weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}	
