#include "Array.hpp"

int main()
{
	try{
	Array <int>intArray;
	std::cout << WHITE << "Size is : " << BLUE << intArray.getSize() << NORMAL << std::endl;
	std::cout << std::endl;

	Array <unsigned int> unsignedArray(2);
	unsignedArray[0] = 20;
	unsignedArray[1] = 5;
	std::cout << WHITE << "Size is : " << BLUE << unsignedArray.getSize() << NORMAL << std::endl;
	std::cout << WHITE << "[0] is : " << BLUE << unsignedArray[0] << NORMAL << std::endl;
	std::cout << WHITE << "[1] is : " << BLUE << unsignedArray[1] << NORMAL << std::endl;
	std::cout << std::endl;
	
	


	Array <unsigned int> outOfRange(5);
	outOfRange[10] = 2;
	} catch (std::exception &exc) { std::cout << BLACK_RED << "ERROR IS : " << RED << exc.what() << NORMAL << std::endl; }
}