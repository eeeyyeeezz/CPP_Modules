#ifndef AMATERIA
#define AMATERIA
#include <iostream>
#include "../../colors.hpp"
#include "ICharacter.hpp"

class AMateria{
	protected:
	std::string	type;

	public:
	AMateria();
	AMateria (std::string const &type);
	AMateria(std::string name);
	AMateria(const AMateria &amateria);
	AMateria &operator=	(const AMateria &amateria);
	~AMateria();
	
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
 