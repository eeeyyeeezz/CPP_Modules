#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include "colors.hpp"

class HumanA{
	private:
	std::string		name;
	Weapon			&weapon;
	
	public:
	HumanA(std::string type, Weapon &weapon);
	void	attack();
	
};

#endif
