#ifndef DIAMOND
#define DIAMOND
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
	std::string	name;
	
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap();
	DiamondTrap &operator=	(const DiamondTrap &diamondtrap);

	void	attack(std::string const &target);
	void	whoAmI();
};

#endif
