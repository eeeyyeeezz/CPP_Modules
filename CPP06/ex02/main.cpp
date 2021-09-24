#include "../colors.hpp"
#include <iostream>

class Base { public: virtual ~Base() { std::cout << RED << "Base destructor has been created ( ͡° ͜ʖ ͡°)\n"; } };

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base *generate(){
	int rand = std::rand();

	if (!(rand % 3)){ return (new A); } 
	else if (rand % 3 == 1) { return (new B); }
	else if (rand % 3 == 2) { return (new C); };
	return (NULL);
}
 
void	identify(Base *ptr){
	if (dynamic_cast<A *>(ptr))
		std::cout << BRIGHT_GREEN << "[A] ( ͡° ل͜ ͡°)\n";
	else if (dynamic_cast<B *>(ptr))
		std::cout << BRIGHT_GREEN << "[B] ( ͡° ل͜ ͡°)\n";
	else if (dynamic_cast<C *>(ptr))
		std::cout << BRIGHT_GREEN << "[C] ( ͡° ل͜ ͡°)\n";
	else
		std::cout << BLACK_RED << "TOTAL ERRROOOOOR ◥(ฅº￦ºฅ)◤\n";
}

void	identify(Base &ptr){
	if (dynamic_cast<A *>(&ptr))
		std::cout << BRIGHT_GREEN << "[A] ( ͡° ل͜ ͡°)\n";
	else if (dynamic_cast<B *>(&ptr))
		std::cout << BRIGHT_GREEN << "[B] ( ͡° ل͜ ͡°)\n";
	else if (dynamic_cast<C *>(&ptr))
		std::cout << BRIGHT_GREEN << "[C] ( ͡° ل͜ ͡°)\n";
	else
		std::cout << BLACK_RED << "TOTAL ERRROOOOOR ◥(ฅº￦ºฅ)◤\n";
}

int		main(){	
	srand(time(0));
	Base	*ptr = generate();
	identify(ptr);

	Base	*ptr2 = generate();
	identify(*ptr2);

	Base	*wrongPtr;
	identify(wrongPtr);
	delete ptr;
	delete ptr2;
}