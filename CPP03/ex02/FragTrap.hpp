#ifndef FRAGTRAP
#define FRAGTRAP
#include "Scavtrap.hpp"	

class FragTrap : public ClapTrap{
	private:
	
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();
	FragTrap &operator=	(const FragTrap &fragtrap);
	
	void highFivesGuys();
};


#endif
