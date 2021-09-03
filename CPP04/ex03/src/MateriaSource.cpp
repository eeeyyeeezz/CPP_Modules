#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() { std::cout << BLUE << "MateriaSource default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

MateriaSource::MateriaSource(const MateriaSource &MateriaSource) { *this = MateriaSource; }

MateriaSource::~MateriaSource() { std::cout << RED << "MateriaSource destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

MateriaSource &MateriaSource::operator=(const MateriaSource &MateriaSource){
	if (this == &MateriaSource)
		return (*this);
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *amateria){
	int id = -1;
	for (int i = 0; i < 4; i++){
		if (_amateria[i] == NULL && id == -1)
			id = i;
	}
	if (id == -1){
		std::cout << RED << "Error! Inventory full!\n" << NORMAL;
		return ;
	}
	_amateria[id] = amateria;
}

AMateria			*MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++){
		if (_amateria[i] != NULL && _amateria[i]->getType() == type)
			return (_amateria[i]);
	}
	std::cout << RED << "Error! MateriaSource not found!\n" << NORMAL;
	return (NULL);
}