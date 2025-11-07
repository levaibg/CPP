#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("fragtrap")
{
	std::cout << "FragTrap constructor Called" << std::endl;
	this->_PV = 100;
	this->_energyPoint = 100;
	this->_AD = 30;
}

FragTrap::~FragTrap()
{
	
	std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << "Fragtrap name constructor called : I am aware" << std::endl;
	this->_name = name;
	this->_PV = 100;
	this->_energyPoint = 100;
	this->_AD = 30;
}

FragTrap& FragTrap::operator=(FragTrap const & other)
{
	this->_name = other._name;
	this->_PV = other._PV;
	this->_AD = other._AD;
	this->_energyPoint = other._energyPoint;
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name  << " : High Five guys !" << std::endl;
}