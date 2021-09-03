#include "../inc/MateriaSource.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

MateriaSource::MateriaSource() { 
	for (int i = 0; i < 4; i++)
		this->_amateria[i] = NULL;
	std::cout << BLUE << "MateriaSource default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource) { *this = MateriaSource; }

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		delete _amateria[i];
		this->_amateria[i] = NULL;
	}
	std::cout << RED << "MateriaSource destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; 
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource){
	if (this == &materiasource)
		return (*this);
	for (int i = 0; i < 4; i++)
		this->_amateria[i] = materiasource._amateria[i];
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
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	std::cout << RED << "Error! MateriaSource not found!\n" << NORMAL;
	return (NULL);
}