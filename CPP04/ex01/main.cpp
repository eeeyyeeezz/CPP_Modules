#include "inc/Animals.hpp"

int		main(){
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;
}