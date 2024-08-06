#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        std::string name;
        Weapon *weapon;
        ~HumanB();
        HumanB(std::string name);
        HumanB(Weapon &WeaponB);
        void setWeapon(Weapon &WeaponB);
        void attack();
};

#endif
