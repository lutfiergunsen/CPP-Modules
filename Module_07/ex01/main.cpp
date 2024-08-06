#include "iter.hpp"

template<typename T>
void print_temp(T par)
{
	std::cout << par << " " << std::endl;
}


int main(){

	int a[] = {1, 2, 3, 4, 5};
	double b[] = {1.23, 4.567, 7.89};
	char c[] = {'a', 'b', 'c', 'd', 'e'};

	iter (a, 5, print_temp); 
	iter (b, 3, print_temp);
	iter (c, 5, print_temp);

	return (0);
}