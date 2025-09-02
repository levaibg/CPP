#include "Zombie.hpp"


Zombie::Zombie()
{
	std::cout << " i rebrithe " << std::endl;
}
Zombie::~Zombie()
{
		std::cout << " i redie " << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
