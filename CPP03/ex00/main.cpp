#include "ClapTrap.hpp"

int		main(){
	ClapTrap lol("lol");
	
	lol.attack("Boby");
	lol.attack("Jack");
	lol.attack("Matilda");
	lol.takeDamage(5);
	lol.beRepaired(10);
	lol.attack("Matilda");
}