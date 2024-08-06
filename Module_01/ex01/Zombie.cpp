#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->anons <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Olusturuldu." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Yok Edildi." << std::endl;
}
