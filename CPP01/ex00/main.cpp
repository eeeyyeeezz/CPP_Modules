#include "Zombie.hpp"

int		main(){
	Zombie *Joe = newZombie("Joe");
	Zombie *Henry = newZombie("Henry");
		
	randomChump("Aboba");
	delete Joe;
	delete Henry;
}