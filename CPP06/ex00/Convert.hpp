#ifndef CONVERT
#define CONVERT
#include "../colors.hpp"
#include <iostream>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h> 
#include <iomanip>

class Convert{
	private:
	std::string _string;
	std::string	_type;

	std::string	_parser(std::string array);
	void		_toInt();
	void		_toChar();
	void		_toFloat();

	public:
	Convert();
	Convert(std::string array);
	Convert(Convert const &conver);
	~Convert();
	Convert &operator=	(const Convert &convert);
};


#endif