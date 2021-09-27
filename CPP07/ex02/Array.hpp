#ifndef ARRAY_HPP228
#define ARRAY_HPP228
#include <iostream>
#include "../colors.hpp"

template <typename T>
class Array{
	private:
	T		*_array;
	size_t	_size;

	public:
	Array <T> () : _array(NULL), _size(0) { std::cout << BLUE << "Array default constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL; }
	Array <T> (unsigned int n) {
		this->_array = new T[n];
		this->_size = n;
		std::cout << BLUE << "Array copy (unsigned int) constructor called (˵ ͡o ͜ʖ ͡o˵)\n" << NORMAL;
	}

	Array <T> (const Array &copy) { 
		std::cout << BLUE << "Array operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
		*this = copy; 
	}

	Array &operator= (const Array &array) {
		if (this == &array)
			return *this;
		if (this->_size != array._size)
			throw std::exception();
		for (int i = 0; array._array[i]; i++)
			this->_array[i] = array._array[i];
		this->_size = array._size;
		std::cout << BLUE << "Array operator constructor called! ( ͡~ ͜ʖ ͡°)" << NORMAL << std::endl;
		return (*this);
	}

	T 	&operator[] (unsigned int n) {
		if (n >= _size)
			throw std::exception();
		return (this->_array[n]);
	}

	T const &operator[] (unsigned int n) const {
		if (n >= _size)
			throw std::exception();
		return (this->_array[n]);
	}

	size_t	getSize() { return (this->_size); }
	
	~Array <T> () { 
		if (this->_array)
			delete[] this->_array;
		std::cout << RED << "Array destructor Called ( ͡°( ͡° ͜ʖ( ͡° ͜ʖ°)ʖ ͡°) ͡°)\n" << NORMAL;
	}
};

#endif
