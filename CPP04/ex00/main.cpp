#include "Animals.hpp"

int		main(){
	const	Animal *animal = new Animal("Animal");
	const	Animal *dog = new Dog("Boby");
	const	Animal *cat = new Cat("Pes");
	
	const	WrongAnimal *wronganimal = new WrongAnimal("WrongAnimal");
	const	WrongAnimal *wrongcat = new WrongCat("WrongCat");
	
	std::cout << BRIGHT_GREEN << dog->getType() << std::endl;
	std::cout << BRIGHT_GREEN << cat->getType() << std::endl;
	std::cout << BRIGHT_GREEN << animal->getType() << std::endl;
	std::cout << BRIGHT_GREEN << wronganimal->getType() << std::endl;
	std::cout << BRIGHT_GREEN << wrongcat->getType() << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	wronganimal->makeSound();
	wrongcat->makeSound();
	delete animal;
	delete dog;
	delete cat;
	delete wronganimal;
	delete wrongcat;
}