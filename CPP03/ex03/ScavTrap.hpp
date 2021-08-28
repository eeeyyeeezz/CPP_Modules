#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
	
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();
	ScavTrap &operator=	(const ScavTrap &scavtrap);
	void	guardGate();
};

#endif
