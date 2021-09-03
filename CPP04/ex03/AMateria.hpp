#ifndef AMATERIA
#define AMATERIA
#include <iostream>

class AMateria{
	protected:

	public:
	AMateria (std::string const &type);
	
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

class ICharacter{
	public:
		// virtual ~ICharacter () { }
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

#endif
 