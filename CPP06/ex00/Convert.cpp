#include "Convert.hpp"

Convert::Convert() : _type("None") { std::cout << BLUE << "Convert default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Convert::Convert(std::string array) : _type("None") {
	_type = parser(array);



}

Convert &Convert::operator= (const Convert &convert) {
	if (this == &convert)
		return *this;
	std::cout << RED << "Convert operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Convert::Convert(Convert const &convert) { *this = convert; }

std::string			Convert::parser(std::string array){
	if (array.length() == 1 && !isdigit(array[0]))
		return ("char");
	else if (array == "-inf" || array == "+inf" || array == "nan")
		return (array);
	else if (array == "-inff" || array == "+inff" || array == "nanf")
		return (array);
	int i = 0;
	while (array[i] && isdigit(array[i]))
		i++;
	if (array[i])	
		throw ("Unknown type!");
	
	return ("int");	
}

Convert::~Convert() { std::cout << RED << "Dog destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }