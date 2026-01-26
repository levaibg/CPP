#include "PmergeMe.hpp"


int main(int ac, char **av)
{
	PmergeMe miaou;
	if(ac < 2)
	{
		std::cerr << "Error : arguments" << std::endl;
		return(1);
	}	
(void)av;
	// std::vector<int> big;
	// try
	// {
	// 	for(int i = 1; av[i]; i++)
	// 	{
	// 		miaou.checkArgs(av[i]);
	// 		int val = std::atoi(av[i]);
	// 		miaou.setStack1(val);
	// 	}
	// 	miaou.setFirstStack(miaou.getVect());
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return(0);
}