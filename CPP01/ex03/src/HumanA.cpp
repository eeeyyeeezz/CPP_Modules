#include "../includes/HumanA.hpp"

// NAME attacks with his WEAPON_TYPE

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void		HumanA::attack(){
	std::cout << RED << this->name << WHITE << " attack with his " << BLUE << weapon.getType() << std::endl;
}
