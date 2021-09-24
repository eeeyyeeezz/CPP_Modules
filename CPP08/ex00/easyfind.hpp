#ifndef EASYFIND
#define EASYFIND
#include "../colors.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <string>

template <typename T>
typename T::iterator easyfind(T &ctr, int num){
	typename T::iterator	i;

	i = std::find(ctr.begin(), ctr.end(), num);
	if (i == ctr.end())
		throw std::string("Number not found");
	return (i);
}

#endif