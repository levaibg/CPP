#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap first;
	ClapTrap traper("pierre");
	Scavtrap scaver("scaver");
	
	traper = first;

	traper.attack("charlie");
	traper.takeDamage(7);
	traper.beRepaired(10);
	std::cout << std::endl;
	scaver.attack("pierre");

	// for (int i = 0; i < 11; i++)
	// 	first.beRepaired(10);

	// for (int i = 0; i < 55; i++)
	// 	scaver.beRepaired(10);

	scaver.takeDamage(12);
	scaver.takeDamage(10000);
	scaver.beRepaired(22);
	scaver.guardGate();
	return(0);
}