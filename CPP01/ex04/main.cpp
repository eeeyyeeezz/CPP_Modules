#include "header.hpp"

static	void	ft_error(std::string str){
	std::cout << RED << str << NORMAL << std::endl;
	exit(0);
}

static	int		check_strings(std::string filename, std::string s1, std::string s2){
	if (!filename[0] || !s1[0] || !s2[0])
		return (1);
	return (0);
}

static	std::string		ft_replace(std::string str, std::string s1, std::string s2, int find){
	std::string	new_string;
	
	new_string = str.substr(0, find);
	new_string += s2;
	new_string += str.substr(find + s1.length());
	return (new_string);
}

int		main(int argc, char **argv){
	if (argc != 4)
		ft_error("Arguments incorrect!");	
		
	std::fstream					fs;
	std::string	filename			= argv[1];
	std::string	filename_replace	= filename + ".replace";
	std::string s1 					= argv[2];
	std::string	s2					= argv[3];
	std::ofstream					fs2(filename_replace.c_str());
	
	if (check_strings(filename, s1, s2))
		ft_error("Strings empty!");	
	fs.open(filename.c_str(), std::fstream::in | std::fstream::out);
	if (!fs.is_open())
		ft_error("Fd Error!");
	std::string	filename_content;
	std::string	new_content;
	while (!fs.eof())
	{
		fs >> filename_content;
		int	find = filename_content.find(s1);
		if (find != -1)
		{
			new_content = ft_replace(filename_content, s1, s2, find);
			fs2 << new_content;
		}
		else
			fs2 << filename_content;
	}
	fs.close();
	fs2.close();
}
