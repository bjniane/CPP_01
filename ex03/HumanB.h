#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB 
{
    private:
        std::string name;
        Weapon  weaponb;
    public:
        HumanB(std::string name_val, Weapon weapon_name);
        ~HumanB();
        void    attack();
};

#endif