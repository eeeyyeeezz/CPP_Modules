#ifndef CURE
#define CURE
#include "AMateria.hpp"

class Cure : public AMateria{
	public:
	Cure();
	Cure (std::string const &type);
	Cure(std::string name);
	Cure(const Cure &cure);
	Cure &operator=	(const Cure &cure);
	~Cure();

	std::string	const &getType() const;
	void		user(ICharacter &target);
	AMateria	*clone() const;
};

#endif