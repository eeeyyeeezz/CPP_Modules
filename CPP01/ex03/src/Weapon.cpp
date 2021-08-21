#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapon_name) : type(weapon_name) {}

const	std::string		&Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string str){
	this->type = str;
}
