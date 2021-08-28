#ifndef FRAGTRAP
#define FRAGTRAP
#include "ScavTrap.hpp"	

class FragTrap : public virtual ClapTrap{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();
	FragTrap &operator=	(const FragTrap &fragtrap);
	
	void highFivesGuys();
};


#endif
