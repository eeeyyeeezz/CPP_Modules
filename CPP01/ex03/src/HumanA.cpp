#include "../includes/HumanA.hpp"

// NAME attacks with his WEAPON_TYPE

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon){
	weapon.setType(name);
}

void		HumanA::attack(){
	std::cout << RED << WHITE << " attack with his " << BLUE << weapon.getType() << std::endl;
}
