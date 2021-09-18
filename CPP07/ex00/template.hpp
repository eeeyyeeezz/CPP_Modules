#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include "../colors.hpp"

template <typename T>
void	swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		&min(T &a, T &b) { return (a < b ? a : b); }

template <typename T>
T		&max(T &a, T &b) { return (a > b ? a : b); }

#endif