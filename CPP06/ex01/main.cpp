#include <iostream>

struct Data { std::string _array; };

uintptr_t serialize(Data *ptr) { return(reinterpret_cast<uintptr_t>(ptr)); };

Data *deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }

int			main(){
	Data		*ptr = new Data;
	ptr->_array = "Yes";
	
	uintptr_t	tmp = serialize(ptr);
	Data		*newPtr = deserialize(tmp);

	std::cout <<  newPtr->_array << std::endl;
	delete ptr;
}