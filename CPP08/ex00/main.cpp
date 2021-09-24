#include "easyfind.hpp"

int			main(){
	std::vector<int> intVector;
	std::list<int>	intList;

	try{
		for (int i = 0; i < 10; i++)
			intVector.push_back(i);
		for (int i = 0; i < static_cast<int>(intVector.size()); i++)
			std::cout << WHITE << "INT VECTOR["<< i << "]: " << BLUE << intVector[i] << NORMAL << std::endl;
		std::cout << std::endl; 
	
		std::cout << WHITE << "LOOKING FOR 4: [" << *easyfind(intVector, 4) << "]" << NORMAL << std::endl;
		std::cout << WHITE << "LOOKING FOR 9: [" << *easyfind(intVector, 9) << "]" << NORMAL << std::endl;
		std::cout << WHITE << "LOOKING FOR 42: " << *easyfind(intVector, 42) << "]" << NORMAL << std::endl;
	} catch (std::string exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }
}