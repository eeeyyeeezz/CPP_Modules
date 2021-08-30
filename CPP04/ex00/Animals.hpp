#ifndef HEADER
#define HEADER
#include <iostream>
#include "../colors.hpp"

class Animal{
	protected:
	std::string type;
	
	public:
	Animal();
	Animal(std::string name);
	Animal(Animal const &Animal);
	virtual	~Animal();
	Animal &operator=	(const Animal &claptrap);

	virtual void	makeSound()	const;
	std::string		getType()	const;
};

class Dog : public virtual Animal{
	public:
	Dog();
	Dog(std::string name);
	Dog(Dog const &Dog);
	virtual	~Dog();
	Dog &operator=	(const Dog &claptrap);
	
	std::string			getType()	const;
	void		makeSound()	const;
};

class Cat : public virtual Animal{
	public:
	Cat();
	Cat(std::string name);
	Cat(Cat const &Cat);
	virtual ~Cat();
	Cat &operator=	(const Cat &claptrap);
	
	std::string			getType()	const;
	void		makeSound()	const;
};

class WrongAnimal{
	protected:
	std::string type;
	
	public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(WrongAnimal const &WrongAnimal);
	virtual ~WrongAnimal();
	WrongAnimal &operator=	(const WrongAnimal &claptrap);
	
	std::string			getType()	const;
	virtual void		makeSound()	const;
};

class WrongCat : virtual public WrongAnimal{
	public:
	WrongCat();
	WrongCat(std::string name);
	WrongCat(WrongCat const &WrongCat);
	virtual ~WrongCat();
	WrongCat &operator=	(const WrongCat &claptrap);
	
	std::string			getType()	const;
	void		makeSound()	const;
	
};

#endif
