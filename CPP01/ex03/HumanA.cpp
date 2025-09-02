#include "HumanA.hpp"
#include "Weapon.hpp"


// void    HumanA::attack()
// {
//     std::cout << name << 
// }

HumanA::HumanA(std::string name, Weapon &WeaponssA) : _name(name), _WeaponA(WeaponssA)
{
    
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _WeaponA.getType() << std::endl;  
}
