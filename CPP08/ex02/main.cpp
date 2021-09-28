#include "mutantstack.hpp"

int		main(){
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);

	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << WHITE << "SIZE IS [" << RED << mstack.size() << WHITE << "]" << NORMAL << std::endl << std::endl;
	while (it != ite) {
 	   std::cout << WHITE << "NUM IS [" << BLUE << *it << WHITE << "]" << NORMAL << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);
	
	
	return (0);
}