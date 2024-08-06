#include "easyfind.hpp"

int	main ( void )
{
	std::vector<int> vec(5, 42);
	easyfind (vec, 4);
	std::list<int> lst;
	lst.push_back(123);
	lst.push_back(456);
	lst.push_back(7);
	lst.push_back(8);
	easyfind (lst, 8);
	return (0);
}
