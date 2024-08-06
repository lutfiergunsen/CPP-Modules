#include <iostream>

int main(int ac, char **av)
{
	if(ac != 1)
	{
		int k = 1;
		int i = 0;

		while (av[k])
		{
			i = 0;
			while (av[k][i])
			{
				std::cout << (char)std::toupper(av[k][i]);
				i++;
			}
			k++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
