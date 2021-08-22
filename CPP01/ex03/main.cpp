#include "includes/HumanA.hpp"
#include "includes/HumanB.hpp"
#include "includes/Weapon.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club very scary!");
	// Weapon club("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club for Bob");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club really not so scary (˵ ͡o ͜ʖ ͡o˵)");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club for Jim");
	jim.attack();
	}
}
