#ifndef ITER
#define ITER
#include <iostream>
#include "../colors.hpp"

template <typename T>
void	iter(T *str, int length, void (* f)(const T &)){
	int i = 0;

	while (i < length)
		f(str[i++]);
}

#endif 