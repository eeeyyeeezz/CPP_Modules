#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "colors.hpp"
#include <iostream>


class Weapon{
	private:
	std::string type;
	
	public:
	const std::string &getType();
	void setType(std::string str);
};

#endif
