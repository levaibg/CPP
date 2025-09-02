#pragma once

#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{

    private:
            std::string _nameb;
            Weapon      *_WeaponB;
    public:
            void    attack();
            void    setWeapon(Weapon &w);
        HumanB(std::string name);
		HumanB();
        ~HumanB();
};