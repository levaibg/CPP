#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string str) : _name(str)
{
	std::cout << _name << ": I live again" << std::endl;
}


Zombie::~Zombie()
{
	std::cout << _name << ": Goodbye" << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

