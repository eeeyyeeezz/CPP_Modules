#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>
#include "../colors.hpp"

class ClapTrap{
	protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=	(const ClapTrap &claptrap);

	// std::string	getName();
	// int			getHitpoints();
	// int			getEnergyPoints();
	// int			getAttackDamage();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int ammount);
	void	beRepaired(unsigned int ammount);

};


#endif
