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

contacts		phonebook::getContactarray(int index)
{
	return (this->contactArray[index]);
}

void			phonebook::printContactInfo(const int index)
{
	std::cout << YELLOW << "First name: " << NORMAL << this->contactArray[index].getFirstName() << std::endl;
	std::cout << YELLOW << "Last name: " << NORMAL << this->contactArray[index].getFirstName() << std::endl;
	std::cout << YELLOW << "Nickname name: " << NORMAL << this->contactArray[index].getFirstName() << std::endl;
	std::cout << YELLOW << "PhoneNumber name: " << NORMAL << this->contactArray[index].getFirstName() << std::endl;
	std::cout << YELLOW << "Darkest... secret: " << NORMAL << this->contactArray[index].getFirstName() << std::endl;
	


}