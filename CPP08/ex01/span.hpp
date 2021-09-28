#ifndef FT_SPAN
#define FT_SPAN
#include "../colors.hpp"
#include <stdlib.h>
// #include 
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
	std::vector<int>	_vector;
	unsigned int		_size;

	public:
	Span();
	Span(unsigned int N);
	Span(Span const &span);
	~Span();
	Span &operator=	(const Span &span);

	void			addNumber(int number);
	void			addNumber(Span &span);
	void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void			sortVector();
	void			printVector();
	unsigned int	getVectorSize();
	unsigned int	getSize();
	int				shortestSpan();
	int				longestSpan();
};

#endif