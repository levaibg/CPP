#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");
	FragTrap Frag("Frag");

	std::cout << std::endl;
	std::cout << "Test attack :" << std::endl << std::endl;
	Clap.attack("Trap");
	Trap.attack("Scav");
	Frag.attack("Clap");

	std::cout << std::endl;
	std::cout << "Test taken damage :" << std::endl << std::endl;
	Clap.takeDamage(5);
	Trap.takeDamage(11);
	Frag.takeDamage(29);

	std::cout << std::endl;
	std::cout << "Test Repair : " << std::endl << std::endl;
	Clap.beRepaired(15);
	Trap.beRepaired(9);
	Frag.beRepaired(3);

	std::cout << std::endl;
	for(int i = 0; i < 101; i++)
	{
		Frag.beRepaired(1);
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	Frag.highFivesGuys();
	std::cout << std::endl;

	return(0);
}