#include "Karen.hpp"

typedef void(Karen::*karen_ptr) ();

static	int		ft_complain(std::string level){
	std::string		array[4] = {
				"debug",
				"info",
				"warning",
				"error"
};
	int i = 0;
	for (int j = 0; j < 4; j++){
		while (array[i] != level)
			i++;
		if (array[i] != level)
			return (4);
	}
	return (i);
}

int		main(int argc, char **argv){
	Karen	Karen;
	
	if (argc != 2){
		std::cout << BLUE << "Wrong argv!" << NORMAL << std::endl;
		return (1);
	}
	switch(ft_complain(argv[1]))
	{
		case 0:
			Karen.complain("debug");
		case 1:
			Karen.complain("info");
		case 2:
			Karen.complain("warning");
		case 3:
			Karen.complain("error");
		case 4:
			std::cout << BLUE "Probably complaining about insignificant problems.." << NORMAL << std::endl;
			break ;
	}
}
