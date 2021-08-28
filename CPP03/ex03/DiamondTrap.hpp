#ifndef DIAMOND
#define DIAMOND
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
	std::string	name;
	
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap();
	DiamondTrap &operator=	(const DiamondTrap &diamondtrap);

	void	whoAmI();
};

#endif
