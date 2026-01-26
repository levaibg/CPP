#include "RNP.hpp"

int main(int ac, char **av)
{
	RNP l;

	if(ac != 2)
	{
		std::cerr << "Error : args" << std::endl;
		return(1);
	}
	try
	{
		l.checksign(av[1]);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return(0);
}