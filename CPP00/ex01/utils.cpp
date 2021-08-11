#include "header.hpp"

static	void	fillContacts(contacts& contacts)
{
	std::string	str;
	
	std::cout << WHITE << "Enter first_name: " << NORMAL;
	std::getline(std::cin, str);
	contacts.setFirstName(str);
	std::cout << WHITE << "Enter last_name: " << NORMAL;
	std::getline(std::cin, str);
	contacts.setLastName(str);
	std::cout << WHITE << "Enter nickname: " << NORMAL;
	std::getline(std::cin, str);
	contacts.setNickname(str);
	std::cout << WHITE << "Enter phonenumber: " << NORMAL;
	std::getline(std::cin, str);
	contacts.setPhonenumber(str);
	std::cout << WHITE << "Enter your darkest_secret: " << NORMAL;
	std::getline(std::cin, str);
	contacts.setDarkestSecret(str);
}

static	void	searchContacts(phonebook& phonebook, int index)
{
	for (int i = 0; i < index; i++)
		phonebook.getPhonebook(i);
}

int		checkString(contacts& contacts, phonebook& phonebook, std::string str)
{
	static	int	index;
	
	if (index >= 8)
		index = 0;
	if (str == "EXIT")
		return (0);
	else if (str == "ADD")
	{
		fillContacts(contacts);
		phonebook.setPhonebook(contacts, index);
		index++;
		return (1);
	}
	else if (str == "SEARCH")
		searchContacts(phonebook, index);
	else
		std::cout << WHITE << "Unknown command! Available commands: " << YELLOW << "[ADD] [SEARCH] [EXIT]" << NORMAL << std::endl;
	return (1);
}