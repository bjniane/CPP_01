#ifndef HARL_H
#define harl_h

#include <iostream>
#include <string>

class Harl 
{
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
    public:
        void    complain(std::string);
};

int get_level(std::string level);

#endif