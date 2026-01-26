#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	Bitcoin btc;
	if(ac != 2)
	{
		std::cout << "Wrong format : [./Bitcoin] [file_name]" << std::endl;
		return(1);
	}

	try
	{
		btc.openCsv();
		btc.checkFile(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return(0);
	
}