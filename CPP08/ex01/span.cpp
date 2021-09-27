#include "span.hpp"

Span::Span() { std::cout << BLUE << "Span default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Span::Span(unsigned int	N) : _size(N) { std::cout << BLUE << "Span copy (unsigned int) constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }


unsigned int			Span::getSize() { return (this->_size); }

unsigned int			Span::getVectorSize(){ return (this->_vector.size()); }

void					Span::printVector(){
	std::vector<int>::iterator		it = _vector.begin();
	std::vector<int>::iterator		it_end = _vector.end();

	while (it != it_end){
		std::cout << WHITE "NUMBER: [" << BLUE << *it << WHITE << "]" << NORMAL << std::endl;
		it++;
	}
}


void					Span::addNumber(int number){
	if (this->getVectorSize() >= this->_size)
		throw std::string("Vector limit exception");
	this->_vector.push_back(number);
}

void					Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	while (begin != end){
		this->addNumber(*begin);
		begin++;
	}
}

Span::~Span() { std::cout << RED << "Span destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }