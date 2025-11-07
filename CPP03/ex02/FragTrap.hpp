#pragma once 

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private :

	public : 

		FragTrap();
		~FragTrap();
		FragTrap(FragTrap &other);
		FragTrap(std::string name);
		void highFivesGuys(void);

		FragTrap &operator=(FragTrap const & other);

};