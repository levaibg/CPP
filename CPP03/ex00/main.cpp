#include "ClapTrap.hpp"


int	main()
{
	ClapTrap first;
	ClapTrap traper("pierre");
	ClapTrap pine(first);
	
	first = traper;

	pine.attack("caca");
	traper.attack("Albert");
	first.attack("f");
	pine.takeDamage(10000000);
	traper.takeDamage(7);
	first.takeDamage(7);
	traper.takeDamage(7);
	traper.takeDamage(7);
	traper.takeDamage(7);

	for (int i = 0; i < 11; i++)
		first.beRepaired(10);

	return(0);
}