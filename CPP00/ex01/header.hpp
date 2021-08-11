#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <string.h>
# include <stdio.h>
# include <iomanip>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;32m"
#define PURPLE "\033[1;35m"
#define GRAY "\033[1;30m"
#define NORMAL "\033[0m"
#define MARK "U+2713"

class contacts{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	public:
	// contacts(void);
	// ~contacts(void);
	void setFirstName(std::string first_name);
	void setLastName(std::string last_name);
	void setNickname(std::string nickname);
	void setPhonenumber(std::string phonenuber);
	void setDarkestSecret(std::string darkest_secret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhonenumber();
	std::string getDarkestSecret();
};

class phonebook{
	private:
	contacts contactArray[8];
	
	public:
	phonebook(void);
	~phonebook(void);
	void			setPhonebook(const contacts& contacts, const int index);
	void			printContactInfo(const int index);
	contacts		getContactarray(const int index);
};

int		checkString(contacts& contacts, phonebook& phonebook, std::string str);

#endif
