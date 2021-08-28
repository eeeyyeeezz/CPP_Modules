#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>
#include "../colors.hpp"

class ClapTrap {
	protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &claptrap);
	~ClapTrap();
	ClapTrap &operator=	(const ClapTrap &claptrap);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int ammount);
	void	beRepaired(unsigned int ammount);
};


#endif
