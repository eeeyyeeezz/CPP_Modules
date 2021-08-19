#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;32m"
#define PURPLE "\033[1;35m"
#define GRAY "\033[1;30m"
#define NORMAL "\033[0m"


class Zombie{	
	private:
		std::string zombieName;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();		
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif