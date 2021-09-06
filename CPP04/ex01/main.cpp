#include "inc/Animals.hpp"

int		main(){
	Animal	*animal[20];
	
	for (int i = 0; i < 20; i++){
		if (i % 2 == 0)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	
	
	
	
}