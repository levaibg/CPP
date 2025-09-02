#pragma once


#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &_WeaponA;
        std::string _name;
    public:
        void    attack();
        HumanA(std::string name, Weapon &w);
		~HumanA();
};