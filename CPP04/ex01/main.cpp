#include "inc/Animals.hpp"

int		main(){
<<<<<<< HEAD
	Animal	*animal[20];
	
	for (int i = 0; i < 20; i++){
		if (i % 2 == 0)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	
	
	
	
=======
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;
>>>>>>> 8d040383124d069f498c8fbbc8741e50b8125b34
}