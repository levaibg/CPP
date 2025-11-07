#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private :

	protected : 
		std::string	_name;
		unsigned int _PV;
		int _AD;
		int _energyPoint;

	public : 

	ClapTrap();
	ClapTrap(ClapTrap &other);
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap &operator=(ClapTrap const & other);

};