#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private :
			std::string _name;

	public : 
			Zombie();
			~Zombie();
			void	setName(std::string str);
			void	anounce(void);


};

Zombie* zombieHorde( int N, std::string name );

#endif	