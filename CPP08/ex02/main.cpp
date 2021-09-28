#include "mutantstack.hpp"

int		main(){
	srand(time(0));
	MutantStack<int>			mstack;

	for (int i = 0; i < 10; i++)
		mstack.push((rand() % 100));
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << WHITE << "SIZE IS [" << RED << mstack.size() << WHITE << "]" << NORMAL << std::endl << std::endl;
	while (it != ite) {
 	   std::cout << WHITE << "NUM IS [" << BLUE << *it << WHITE << "]" << NORMAL << std::endl;
		++it; 
	}

	mstack.pop();
	mstack.pop();
	MutantStack<int>::iterator begin = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();

	std::cout << std::endl << RED "[AFTER DELETING 2 ELEMENTS]\n" NORMAL << std::endl;;
	std::cout << WHITE << "SIZE IS [" << RED << mstack.size() << WHITE << "]" << NORMAL << std::endl << std::endl;
	while (begin != end) {
 		std::cout << WHITE << "NUM IS [" << BLUE << *begin << WHITE << "]" << NORMAL << std::endl;
		++begin; 
	}
	
	return (0);
}