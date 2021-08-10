#include <iostream>
using namespace std;

int		main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				argv[i][j] = toupper(argv[i][j]);
			cout << argv[i];
		}
	}
	cout << endl;
	return (0);
}