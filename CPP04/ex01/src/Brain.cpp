#include "../inc/Brain.hpp"

Brain::Brain() { std::cout << BLUE << "Brain default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Brain::Brain(Brain const &Brain) { *this = Brain; }

Brain &Brain::operator= (const Brain &brain) {
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << RED << "Brain operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

Brain::~Brain() { std::cout << RED << "Brain destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

std::string			*Brain::getIdeas() { return (this->ideas); }