#include "span.hpp"

Span::Span() { std::cout << BLUE << "Span default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Span::Span(unsigned int	N) : _size(N) { std::cout << BLUE << "Span copy (unsigned int) constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }

Span::Span(Span const &span) { *this = span; }

Span &Span::operator= (const Span &span) {
	if (this == &span)
		return *this;
	this->_vector = span._vector;
	this->_size = span._size;
	std::cout << RED << "Span operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
	return (*this);
}

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

void					Span::addNumber(Span &span){
	srand(time(0));
	std::vector<int>			intArray;
	for (int i = 0; i < 10; i++)
		intArray.push_back((std::rand() % 50) - 25);
	std::vector<int>::iterator	begin = intArray.begin();
	std::vector<int>::iterator	end = intArray.end();

	while (begin != end){
		span.addNumber(*begin);
		begin++;
	}
}


void					Span::sortVector() { std::sort(_vector.begin(), _vector.end()); } 

unsigned int						Span::longestSpan(){ 
	if (this->getVectorSize() <= 1)
		throw std::string("Only one element in vector!");
	return (*std::max_element(this->_vector.begin(), this->_vector.end()) - *std::min_element(this->_vector.begin(), this->_vector.end())); 
}

unsigned int						Span::shortestSpan(){
	if (this->getVectorSize() <= 1)
		throw std::string("Only one element in vector!");
	this->sortVector();
	std::vector<int>::iterator begin = this->_vector.begin();
	std::vector<int>::iterator end = this->_vector.end();
	unsigned int			shortest = UINT_MAX;
	unsigned int			tmp;

	while (++begin != end - 1){
		tmp = static_cast<unsigned int>(*(begin + 1) - *begin);
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest);
}

Span::~Span() { std::cout << RED << "Span destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }