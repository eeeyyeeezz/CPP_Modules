#include "header.hpp"

phonebook::phonebook()
{
	std::cout << WHITE << "Constructor for phonebook created!" << std::endl;
	std::cout << RED << "༼ つ ◕_◕ ༽つ Welcome to myAwesomePhonebook!" << std::endl;
	return ;
}

phonebook::~phonebook()
{
	std::cout << WHITE << "Destructor for phonebook created!" << std::endl;
	std::cout << RED << "༼ つ ◕_◕ ༽つ Goodbye!" << std::endl;
	return ;
}

void		phonebook::setPhonebook(const contacts& contacts, int index)
{
	this->contactArray[index] = contacts;
}

void		phonebook::getPhonebook(int index)
{
	std::cout << contactArray[index].getFirstName() << std::endl;
	std::cout << contactArray[index].getLastName() << std::endl;
	std::cout << contactArray[index].getNickname() << std::endl;
	std::cout << contactArray[index].getPhonenumber() << std::endl;
	std::cout << contactArray[index].getDarkestSecret() << std::endl;
}