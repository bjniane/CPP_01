#include "HumanB.h"

HumanB::HumanB(std::string name_val, Weapon weapon_name)
    : name(name_val), weaponb(weapon_name)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weaponb.getType() << std::endl;
}