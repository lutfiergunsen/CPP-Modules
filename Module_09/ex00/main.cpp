#include "BitcoinExchange.hpp"

int	main (int argc, char **argv)
{
	try
	{
		std::cout << "------------------------------\n";
		btc	Btc;
		Btc.setDataBase(argc);
		Btc.setInput(argv[1]);
		std::cout << "------------------------------\n";
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}