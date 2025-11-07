#include "ClapTrap.hpp"


ClapTrap::ClapTrap() :  _name("clapper") ,_PV(10), _AD(0), _energyPoint(10)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default destructor called" << std::endl;

}
ClapTrap::ClapTrap(std::string name) :_name(name)
{
	_name = name;
	_PV = 10;
	_energyPoint = 10;
	_AD = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & other)
{
	this->_name = other._name;
	this->_PV = other._PV;
	this->_AD = other._AD;
	this->_energyPoint = other._energyPoint;

	return(*this);
}

void ClapTrap::attack(const std::string& target)
{

	if(_PV == 0)
	{
		std::cout << "I'M dead cant attack" << std::endl;
		return;
	}
	if(_energyPoint == 0)
	{
		std::cout << "I'm tired..." <<std::endl;
		return;
	}
	std::cout << "Claptrap " << _name << " Attacks " << target << ", Causing " << _AD << " Damage" << std::endl;
	if(_energyPoint > 0)
		_energyPoint--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(_PV == 0)
	{
		std::cout << "I cant take dmg, I'm dead" << std::endl;
		return;
	}
	else 
	{
		if(amount > _PV)
			_PV = 0;
		else
			_PV -= amount;
		std::cout<< "Claptrap " << _name << " took " << amount << " damage  : 'ouch'" << std::endl;
		std::cout << "PV left " << _PV << std::endl;
	}
	if(_PV == 0)
		std::cout << "I Die" <<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(_PV == 0)
	{
		std::cout << "I'M dead cant repare" << std::endl;
		return;
	}
	if(_energyPoint == 0)
	{
		std::cout << "I'm tired..." <<std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " healed " << amount << " PV" << std::endl;
	_PV += amount;
	if(_energyPoint > 0)
		_energyPoint--;
}

