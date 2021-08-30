#ifndef WRONG
#define WRONG
#include "Animals.hpp"

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
