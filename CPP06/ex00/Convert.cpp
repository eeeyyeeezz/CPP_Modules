#include "Convert.hpp"

Convert::Convert() : _type("None") { }

Convert::Convert(std::string array) {
	this->_string = array;
	_type = _parser(array);
	this->_toChar();
	this->_toInt();
	this->_toFloat();
}

Convert &Convert::operator= (const Convert &convert) {
	if (this == &convert)
		return *this;
	this->_string = convert._string;
	this->_type = convert._type;
	std::cout << RED << "Convert operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Convert::Convert(Convert const &convert) { *this = convert; }

void				Convert::_toChar(){
	if (_type == "char")
		std::cout << WHITE << "Char : " << BLUE << _string << std::endl;
	else{
		int	charInt = atol(this->_string.c_str());
		if (charInt >= 33 && charInt <= 126)
			std::cout << WHITE << "Char : " << BLUE << static_cast<char>(charInt) << std::endl;
		else 
			std::cout << WHITE << "Char : " << RED << "non displayable" << std::endl;
	}
}

static bool				isInfInt(std::string type){
	if (type == "-inf" || type == "+inf")
		return (true);
	return (false);
}

static bool				isInfFloat(std::string type){
	if (type == "-inff" || type == "+inff")
		return (true);
	return (false);
}

void				Convert::_toInt(){
	if (isInfInt(this->_type)){
		std::cout << WHITE << "Int : " << BLUE << this->_type << std::endl;
		return ;
	}
	else if (this->_type == "int" || this->_type == "float"){
		long int strInt = atol(this->_string.c_str());
		if (strInt >= INT_MIN && strInt <= INT_MAX)
			std::cout << WHITE << "Int : " << BLUE << strInt << std::endl;
		else 
			std::cout << WHITE << "Int : " << RED << "impossible. Int overflow ¯\\_(ツ)_/¯" << std::endl;
		return ;
	}
	else if (this->_type == "char"){
		char charStr = this->_string[0];
		std::cout << WHITE << "Int : " << BLUE << static_cast<int>(charStr) << std::endl;
		return ;
	}
	std::cout << WHITE << "Int : " << BLUE << "nan" << std::endl;
}

void				Convert::_toFloat(){
	if (isInfFloat(this->_type)){
		std::cout << WHITE << "Float : " << BLUE << this->_type << std::endl;
		std::cout << WHITE << "Double : " << BLUE << this->_type << std::endl;
		return ;
	}
	else if (this->_type == "float" || this->_type == "int"){
		double strDouble = atof(this->_string.c_str());
		float strFloat = atof(this->_string.c_str());
		std::cout << WHITE << "Float : " << BLUE << std::fixed << std::setprecision(1) << strFloat << "f" << std::endl;
		std::cout << WHITE << "Double : " << BLUE << std::fixed << std::setprecision(1) << strDouble << std::endl;
		return ;
	}
	else if (this->_type == "char"){
		char charStr = this->_string[0];
		std::cout << WHITE << "Float : " << BLUE << std::fixed << std::setprecision(1) << static_cast<float>(charStr) << "f" << std::endl;
		std::cout << WHITE << "Double : " << BLUE << std::fixed << std::setprecision(1) << static_cast<double>(charStr) << std::endl;
		return ;
	}
	std::cout << WHITE << "Float : " << BLUE << "nanf" << std::endl;
	std::cout << WHITE << "Double : " << BLUE << "nan" << std::endl;
}

std::string			Convert::_parser(std::string array){
	if (array.length() == 1 && !isdigit(array[0]))
		return ("char");
	else if (array == "-inf" || array == "+inf" || array == "nan")
		return (array);
	else if (array == "-inff" || array == "+inff" || array == "nanf")
		return (array);
	int i = 0;
	bool isfloat = false;
	if (array[i] == '-' || array[i] == '+')
		i++;
	while ((array[i] && isdigit(array[i])) || array[i] == '.'){
		if (array[i] == '.')
			isfloat = true;
		i++;
	}
	if ((array[i] == 'f' && !array[i + 1]) || isfloat)
		return ("float");
	if (array[i])
		throw std::string("Unknown type!");
	return ("int");	
}

Convert::~Convert() { }