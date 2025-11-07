#pragma once

#include "ClapTrap.hpp"


class Scavtrap : public ClapTrap
{
	private : 


	public : 
	Scavtrap();
	~Scavtrap();
	Scavtrap(Scavtrap &other);
	Scavtrap(std::string name);
	void guardGate();
	void attack(const std::string& target);


	Scavtrap &operator=(Scavtrap const & other);

};