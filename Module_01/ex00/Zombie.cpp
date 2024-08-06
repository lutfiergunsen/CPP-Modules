#include "Zombie.hpp"

Zombie::Zombie()
{
	this->Name = "Noname";
}

Zombie::Zombie(std::string name)
{
	this->Name = name;
	std::cout << this->Name << ": ";
}

Zombie::~Zombie()
{
	std::cout << this->Name << ": Zombie has been died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
