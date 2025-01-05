#include "file.h"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename;
        std::string s1;
        std::string s2;

        filename = av[1];
        s1 = av[2];
        s2 = av[3];

        redirectFile(filename, s1, s2);
    }
    else
        std::cout << "tttttt" << std::endl;
}