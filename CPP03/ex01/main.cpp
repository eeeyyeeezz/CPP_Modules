#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int		main(){
	ScavTrap kek("Scappy");

	kek.attack("gmorra");
	kek.takeDamage(150);
	kek.beRepaired(100);
	kek.takeDamage(99);
	kek.guardGate();
}