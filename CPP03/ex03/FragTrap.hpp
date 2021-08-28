#ifndef FRAGTRAP
#define FRAGTRAP
#include "Scavtrap.hpp"	

class FragTrap : public ScavTrap{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();
	FragTrap &operator=	(const FragTrap &fragtrap);
	
	void highFivesGuys();
};


#endif
