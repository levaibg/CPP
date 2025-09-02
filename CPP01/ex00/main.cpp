#include "Zombie.hpp"

int	main(void)
{
	Zombie* first = newZombie("patrick");
	first->anounce();
	delete(first);
	std::cout<<std::endl;
	// Zombie* second;
	randomChump("Pierre");
	return(0);
}