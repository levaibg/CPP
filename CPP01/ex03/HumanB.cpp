#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _nameb(name), _WeaponB(NULL)
{

}
HumanB::HumanB()
{

}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &w)
{
    _WeaponB = &w;
}


void    HumanB::attack()
{
	
	if (!_WeaponB)
	{
		std::cout << "Error no weapon" << std::endl;
		return;
	}
    std::cout << _nameb << " attacks with their " << _WeaponB->getType() << std::endl;  
}