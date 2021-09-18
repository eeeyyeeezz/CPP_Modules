#include "iter.hpp"

template <typename T>
void	print(T const &x) { std::cout << BRIGHT_GREEN << "ABOBA ( ＾◡＾)っ✂❤: " << WHITE << x << NORMAL << std::endl; }

int		main(){
	std::string str[] = {"one!", "two!", "three!"};
	int			int_array[] = {1, 2, 3, 500, 100000, -20};

	iter(str, 3, print);
	std::cout << "--------------------------" << std::endl;
	iter(int_array, 6, print);
	std::cout << "--------------------------" << std::endl;
	// iter(str, 25, print); rofl
}