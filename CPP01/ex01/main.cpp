#include "Zombie.hpp"

int main(void)
{
	Zombie* first = zombieHorde(10, "Patrick");
	delete []first ;
	return 0;
}