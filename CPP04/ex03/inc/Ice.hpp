#ifndef ICE
#define ICE
#include "AMateria.hpp"

class Ice : public AMateria{
	public:
	Ice();
	Ice (std::string const &type);
	Ice(std::string name);
	Ice(const Ice &Ice);
	Ice &operator=	(const Ice &ice);
	~Ice();

	std::string	const &getType() const;
	void		user(ICharacter &target);
	AMateria	*clone() const;
};

#endif