#include "Weapon.hpp"

Weapon::Weapon(std::string typew) : _type(typew)
{

}
Weapon::Weapon()
{
    
}


Weapon::~Weapon()
{
    
}

const std::string Weapon::getType(void)
{
    return(_type);
}


void    Weapon::setType(std::string str)
{
    _type = str;
}