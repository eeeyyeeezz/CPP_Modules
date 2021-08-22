#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;32m"
#define PURPLE "\033[1;35m"
#define GRAY "\033[1;30m"
#define NORMAL "\033[0m"

class Karen{
	private:
	void	debug();
	void 	info();
	void	warning();
	void	error();
	
	public:
	void	complain(std::string level);
	
};



#endif
