#ifndef CONVERT
#define CONVERT
#include "../colors.hpp"
#include <iostream>
#include <ctype.h>

class Convert{
	private:
	std::string _string;
	std::string	_type;
	std::string	parser(std::string array);
	
	public:
	Convert();
	Convert(std::string array);
	Convert(Convert const &conver);
	~Convert();
	Convert &operator=	(const Convert &convert);
	
};


#endif