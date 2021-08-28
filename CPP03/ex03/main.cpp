#include "DiamondTrap.hpp"

int		main(){
	DiamondTrap diamond("Diamond");
	
	diamond.whoAmI();
	std::cout << std::endl;
	diamond.attack("not DIamond!!!");
	diamond.takeDamage(30);
	diamond.beRepaired(500);
	diamond.highFivesGuys();
}