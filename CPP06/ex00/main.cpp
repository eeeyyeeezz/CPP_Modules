#include "Convert.hpp"


int			main(int argc, char **argv){
	std::string array;

	if (argc != 2){
		std::cout << RED << "Argc error!\n";
		return (1);
	}
	try{
		Convert	convert(static_cast<std::string>(argv[1]));

	} catch (std::string &exc) { std::cout << BLACK_RED << "ERROR IS: " << RED << exc << NORMAL << std::endl; }

}