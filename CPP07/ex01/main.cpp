#include "iter.hpp"

void	funct(int a)
{
	std::cout << "Fonction !" << a << std::endl;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	
	iter(a, 5, funct);
	
}