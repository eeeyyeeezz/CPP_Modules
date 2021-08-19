#include "Zombie.hpp"

int		main(){
	Zombie	*zombieArmy = zombieHorde(3, "Henry");
	Zombie	*zombieArmy2 = zombieHorde(3, "Jack");
	Zombie	*zombieArmy3 = zombieHorde(3, "Bobby");
		
	for (int i = 0; i < 3; i++)
	{
		zombieArmy[i].announce();
		zombieArmy2[i].announce();
		zombieArmy3[i].announce();
	}
	delete[] zombieArmy;
	delete[] zombieArmy2;
	delete[] zombieArmy3;
}
