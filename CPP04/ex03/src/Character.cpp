#include "../inc/Character.hpp"

Character::Character() { std::cout << BLUE << "Character default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Character::Character(std::string &type) : type(type) { std::cout << BLUE << "Character copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Character::Character(const Character &Character) { *this = Character; }

Character::~Character() { std::cout << RED << "Character destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

Character &Character::operator=(const Character &character){
	if (this == &character)
		return (*this);
	this->type = character.type;
	return (*this);
}

std::string const &Character::getName() const { return (this->type); }

void		Character::equip(AMateria *amateria){
	int id = -1;
	for (int i = 0; i < 4; i++){
		if (_amateria[i] == NULL && id == -1)
			id = i;
	}
	if (id == -1){
		std::cout << RED << "Error! Inventory full!\n";
		return ;
	}
	_amateria[id] = amateria;
}

void		Character::unequip(int id){
	if (id >= 0 && id <= 3 && this->_amateria[id] != NULL)
		this->_amateria[id] = NULL;
	else
		std::cout << RED << "Error! Inventory Full!\n" << NORMAL;
}

void		Character::use(int id, ICharacter &target){
	if (id >= 0 && id <= 3 && this->_amateria[id] != NULL)
		_amateria[id]->use(target);
	else
		std::cout << RED << "Kein Materia auf diesen Index (¬▂¬)\n" << NORMAL;
}