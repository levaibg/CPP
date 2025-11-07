#include "ScavTrap.hpp"

Scavtrap::Scavtrap()  : ClapTrap("pierrick")
{
	std::cout << "Scavtrap constructor called : I am aware" << std::endl;
	this->_PV = 100;
	this->_energyPoint = 50;
	this->_AD = 20;
}

Scavtrap::Scavtrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap name constructor called : I am aware" << std::endl;
	this->_PV = 100;
	this->_energyPoint = 50;
	this->_AD = 20;
}

Scavtrap::~Scavtrap()
{
	std::cout << "Scavtrap destrucor called : Goodbye !" << std::endl;

}
Scavtrap::Scavtrap(Scavtrap &other) : ClapTrap(other)
{
	std::cout << "Scavtrap copy constructor called : We am aware" << std::endl;
	*this = other;
}

Scavtrap& Scavtrap::operator=(Scavtrap const & other)
{
	this->_name = other._name;
	this->_PV = other._PV;
	this->_AD = other._AD;
	this->_energyPoint = other._energyPoint;

	return(*this);
}

void Scavtrap::guardGate()
{
	std::cout << "I am in gatekeep mode" << std::endl;
}


void Scavtrap::attack(const std::string& target)
{

	if(_PV == 0)
	{
		std::cout << "I'M mister scav, i'm dead cant attack" << std::endl;
		return;
	}
	if(_energyPoint == 0)
	{
		std::cout << "I'm tired(scav tired)..." <<std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " Attacks " << target << ", Causing " << _AD << " Damage" << std::endl;
	if(_energyPoint > 0)
		_energyPoint--;
}
