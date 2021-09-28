#ifndef MUTANTSTACK
#define MUTANTSTACK
#include "../colors.hpp"
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<int> {
	public:
	MutantStack() : std::stack<int>() { std::cout << BLUE << "MutantStack default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }
	MutantStack(MutantStack const &mutantstack) : std::stack<int>(mutantstack) { std::cout << BLUE << "MutantStack copy constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }
	virtual ~MutantStack() { std::cout << RED << "MutantStack destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL; }

	MutantStack &operator=(MutantStack const &mutanstack){
		this->c = mutanstack.c;
		return (*this);
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
};

#endif