#include "header.hpp"

int		main()
{
	phonebook	phonebook;
	contacts	contacts;
	std::string		str;
	
	while (1){
		std::cout << GREEN << "Enter command: " << NORMAL;
		std::getline(std::cin, str);
		if (!checkString(contacts, phonebook, str))
			break ;
	}
	return (0);
}