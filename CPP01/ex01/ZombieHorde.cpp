#include "Zombie.hpp"

Zombie	*zombieHorde(int num, std::string name){
	Zombie *zombieHorde = new Zombie[num];
	
	for (int i = 0; i < num; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
