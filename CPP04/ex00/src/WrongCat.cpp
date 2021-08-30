#include "../Animals.hpp"

WrongCat::WrongCat() { std::cout << BLUE << "WrongCat default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

WrongCat::WrongCat(std::string name){
	this->type = name;
	std::cout << BLUE << "WrongCat copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; 
}
	
WrongCat::WrongCat(WrongCat const &WrongCat) { *this = WrongCat; }

WrongCat &WrongCat::operator= (const WrongCat &WrongCat) {
	if (this == &WrongCat)
		return *this;
	this->type = WrongCat.type;
	std::cout << RED << "WrongCat operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

std::string			WrongCat::getType() const { return(this->type); }

WrongCat::~WrongCat() { std::cout << RED << "WrongCat destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

void		WrongCat::makeSound() const { std::cout << WHITE << "Bro no sound (WrongCat) ( ͠° ͟ʖ ͡°)\n"; }
