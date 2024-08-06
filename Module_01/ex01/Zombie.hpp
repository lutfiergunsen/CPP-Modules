#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
    private:
        std::string anons;
    public:
        Zombie();

        Zombie(std::string);

        ~Zombie();

        void announce(void);

        void setName(std::string str)
        {
            this->anons = str;
        };
};

Zombie*    zombieHorde( int N, std::string str );
#endif
