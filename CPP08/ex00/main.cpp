#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> israhal;
	israhal.push_back(42);	
	israhal.push_back(1);
	israhal.push_back(55);	
	israhal.push_back(12);	
	israhal.push_back(88);	
	israhal.push_back(97);	
	israhal.push_back(00);	
	israhal.push_back(34);
	
	try
	{
		easyfind(israhal, 42);
		std::cout << "There is an occurence for 42" << std::endl;
		easyfind(israhal, 67);
		std::cout << "There is an occurence for 67" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	return(0);
}