#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout << RED << name << WHITE << " zombie created!" << std::endl;
	setName(name);
	announce();
}

Zombie::~Zombie(){
	std::cout << WHITE << "Zombie " << RED << this->zombieName << WHITE << " is destroyed!" << std::endl;
	
}

void	Zombie::announce(){
	std::cout << RED << this->zombieName << WHITE <<
			" BraiiiiiiinnnzzzZ..." << NORMAL << std::endl;
}

void	Zombie::setName(std::string name){
	this->zombieName = name;
}
