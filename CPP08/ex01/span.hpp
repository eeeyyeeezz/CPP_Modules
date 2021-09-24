#ifndef FT_SPAN
#define FT_SPAN
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
	unsigned int N;

	public:
	Span();
	Span(unsigned int N);
	Span(Span const &span);
	~Span();
	Span &operator=	(const Span &span);

};

#endif