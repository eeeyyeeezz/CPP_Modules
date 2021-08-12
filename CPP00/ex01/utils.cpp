#include "header.hpp"

static	int		fillContacts(contacts& contacts)
{
	std::string	str;
	
	std::cout << WHITE << "Enter first_name: " << NORMAL;
	std::getline(std::cin, str);
	if (!str[0])
		return (1);
	contacts.setFirstName(str);
	std::cout << WHITE << "Enter last_name: " << NORMAL;
	std::getline(std::cin, str);
	if (!str[0])
		return (1);
	contacts.setLastName(str);
	std::cout << WHITE << "Enter nickname: " << NORMAL;
	std::getline(std::cin, str);
	if (!str[0])
		return (1);
	contacts.setNickname(str);
	std::cout << WHITE << "Enter phonenumber: " << NORMAL;
	std::getline(std::cin, str);
	if (!str[0])
		return (1);
	contacts.setPhonenumber(str);
	std::cout << WHITE << "Enter your darkest_secret: " << NORMAL;
	std::getline(std::cin, str);
	if (!str[0])
		return (1);
	contacts.setDarkestSecret(str);
	return (0);
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

namespace ft {
	class String {
		private:
			char *arr;
		public:
			String() {
				arr = nullptr;
			}

			char operator[](int inex) {
				return arr[inex];
			}
	};
}

static	int		checkIfInt(std::string id_string)
{
	int	i = 0;

	if (id_string == "")
		return (0);
	while (id_string[i] >= 48 && id_string[i] <= 57 && id_string[i])
		i++;
	if (!id_string[i])
		return (1);
	return (0);
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
		std::string id_string;
		
		std::cout << GREEN << "Enter index for detailed information: " << NORMAL;
		std::getline(std::cin, id_string);
		if (!checkIfInt(id_string))
		{
			std::cout << WHITE << "Please, type an integer!" << NORMAL << std::endl;
			return ;
		}
		id = atoi(id_string.c_str());
		std::cout << "THIS IS ID [" << id << "]" << std::endl;
		if (id < index && id >= 0 && id < 8)
			phonebook.printContactInfo(id);
		else
			std::cout << "Index wrong!" << std::endl;

	}
}

int		checkString(contacts& contacts, phonebook& phonebook, std::string str)
{
	static	int	index;
	
	if (index >= 2)
	{
		std::cout << "INDEX DOWN [" << index << "]" << std::endl;
		index = 0;
	}
	if (str == "EXIT")
		return (0);
	else if (str == "SEARCH")
		searchContacts(phonebook, index);
	else if (str == "ADD")
	{
		if (!fillContacts(contacts))
		{
			phonebook.setPhonebook(contacts, index);
			index++;
		}
		else
			std::cout << "Blank position is not tolerated!" << std::endl;
		return (1);
	}
	else if (!str[0])
		;
	else
		std::cout << WHITE << "Unknown command! Available commands: " << YELLOW << "[ADD] [SEARCH] [EXIT]" << NORMAL << std::endl;
	return (1);
}