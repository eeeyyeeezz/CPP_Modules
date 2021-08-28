#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int		main(){
	ClapTrap lol("lol");
	ScavTrap kek("Scappy");

	kek.takeDamage(150);
	kek.beRepaired(100);
	kek.takeDamage(99);
	kek.guardGate();
}