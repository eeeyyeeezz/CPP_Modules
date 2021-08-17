#include "header.hpp"

static	void	fillContacts(contacts& contacts)
{
	std::string	str;
	
	std::cout << WHITE << "Enter first_name: " << NORMAL;
	std::cin >> str;
	contacts.setFirstName(str);
	std::cout << WHITE << "Enter last_name: " << NORMAL;
	std::cin >> str;
	contacts.setLastName(str);
	std::cout << WHITE << "Enter nickname: " << NORMAL;
	std::cin >> str;
	contacts.setNickname(str);
	std::cout << WHITE << "Enter phonenumber: " << NORMAL;
	std::cin >> str;
	contacts.setPhonenumber(str);
	std::cout << WHITE << "Enter your darkest_secret: " << NORMAL;
	std::cin >> str;
	contacts.setDarkestSecret(str);
}

static	std::string	trimString(std::string str)
{
	std::string new_str; 
	
	if (str.length() < 10)
		return (str);
	else
		new_str = str.substr(0, 9);
	return (new_str + '.');
}

static	void	searchContacts(phonebook& phonebook, int index)
{
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|" << "   index  " << "|"  << "first name"
		<< "|"  << " last name" << "|" << " nickname " << "|" << std::endl;
	for (int i = 0; i < index; i++){
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|" << std::setw(10) << i << "|" << std::setw(10)
	<< trimString(phonebook.getContactarray(i).getFirstName()) << "|"
	<< std::setw(10) << trimString(phonebook.getContactarray(i).getLastName())
	<< "|" << std::setw(10) << trimString(phonebook.getContactarray(i).getNickname()) << "|" << std::endl;
	}
	std::cout << "*-------------------------------------------*" << std::endl;
	if (index > 0)
	{
		int id;
		std::cin.ignore();
		std::cout << GREEN << "Enter index for detailed information: " << NORMAL;
		std::cin >> id;
		if (id < index && id >= 0 && id < 8)
			phonebook.printContactInfo(id);
		else
			std::cout << "Index wrong!" << std::endl;
	}
}

int		checkString(contacts& contacts, phonebook& phonebook, std::string str)
{
	static	int	index;
	
	if (index >= 3)
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