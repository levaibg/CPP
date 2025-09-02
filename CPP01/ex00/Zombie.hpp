#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private :
	std::string		_name;

	public : 
	Zombie(std::string str);
	Zombie();
	~Zombie();
	void	anounce(void);
	
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif