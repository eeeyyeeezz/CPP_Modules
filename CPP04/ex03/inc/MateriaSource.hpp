#ifndef MATERIASOURCE
#define MATERIASOURCE
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
	AMateria *_amateria[4];
	
	public:
	MateriaSource();
	MateriaSource(std::string name);
	MateriaSource(const MateriaSource &materiasource);
	MateriaSource &operator=	(const MateriaSource &materiasource);
	~MateriaSource();

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif
