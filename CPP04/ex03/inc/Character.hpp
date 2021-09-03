#ifndef CHARACTER_LOL
#define CHARACTER_LOL
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	private:
	std::string	type;
	AMateria *_amateria[4];

	public:
	Character();
	Character (std::string &type);
	Character(std::string name);
	Character(const Character &Character);
	Character &operator=	(const Character &character);
	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
