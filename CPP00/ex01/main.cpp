#include "header.hpp"

int		main(int argc, char **argv)
{
	phonebook	phonebook;
	contacts	contacts;
	std::string		str;
	
	while (1){
		std::cout << GREEN << "Enter command: " << NORMAL;
		std::getline(std::cin, str);
		if (checkString(contacts, phonebook, str) == 0)
			break ;
		// phonebook.setPhonebook(contacts, i);
	}
	return (0);
}