#include "Zombie.hpp"

Zombie* zombieHorde(int count, std::string str)
{
    Zombie *zombie1 = new Zombie[count];
 
    for (int i = 0; i < count; i++)
        zombie1[i].setName(str);

    return (zombie1);
}
