#ifndef HEADER
#define HEADER
#include <iostream>
#include "../../colors.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

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
	private:
	Brain	*brain;
	
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
	private:
	Brain	*brain;
	
	public:
	Cat();
	Cat(std::string name);
	Cat(Cat const &Cat);
	virtual ~Cat();
	Cat &operator=	(const Cat &claptrap);
	
	void				makeSound()		const;
	std::string			getType()		const;
};

#endif
