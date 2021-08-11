#include "header.hpp"

// contacts::contacts()
// {
// 	cout << WHITE << "Constructor for contacts created!" << endl;
// 	return ;
// }

// contacts::~contacts()
// {
// 	cout << WHITE << "Destructor for contacts created!" << endl;
// 	return ;
// }

void	contacts::setFirstName(std::string str){
	this->first_name = str;
}

void	contacts::setLastName(std::string str){
	this->last_name = str;
}

void	contacts::setNickname(std::string str){
	this->nickname = str;
}

void	contacts::setPhonenumber(std::string str){
	this->phone_number = str;
}

void	contacts::setDarkestSecret(std::string str){
	this->darkest_secret = str;
}

std::string	contacts::getFirstName(){
	return (this->first_name);
}

std::string	contacts::getLastName(){
	return (this->last_name);
}

std::string	contacts::getNickname(){
	return (this->nickname);
}

std::string	contacts::getPhonenumber(){
	return (this->phone_number);
}

std::string	contacts::getDarkestSecret(){
	return (this->darkest_secret);
}