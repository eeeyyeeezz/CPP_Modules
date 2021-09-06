#ifndef BRAIN
#define BRAIN
#include "Animals.hpp"

class Brain{
	protected:
	std::string	ideas[100];
	
	public:
	Brain();
	Brain(Brain const &Brain);
	virtual	~Brain();
	Brain &operator=	(const Brain &claptrap);
	
	std::string			*getIdeas();
	void				setIdeas(std::string *ideas);
};

#endif
