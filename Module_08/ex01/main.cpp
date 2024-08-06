#include "Span.hpp"

int main()
{
    std::cout << "Test 1" << std::endl;
	Span sp = Span(5);
	sp.addNumber(0);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(142);

	sp.addNumber(1234);
	sp.addNumber(131);
	std::cout << "min dis: " << sp.shortestSpan() << std::endl;
	std::cout << "max dis: " << sp.longestSpan() << std::endl;
	
	// std::cout << "Test 2" << std::endl;
	// Span s1(4);
	// s1.addNumber(1);
	// s1.addNumber(5);
	// s1.addNumber(13);
	// s1.addNumber(42);
	// std::cout << "min dis: " << s1.shortestSpan() << std::endl;
	// std::cout << "max dis: " << s1.longestSpan() << std::endl;

	return 0;
}