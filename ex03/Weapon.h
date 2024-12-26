#ifndef WEAPON_H
#define WEAPOB_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type_value);
        ~Weapon();
        void    setType(std::string type_value);
        const std::string& getType();
};

#endif