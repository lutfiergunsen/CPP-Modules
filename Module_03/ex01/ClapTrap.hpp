#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    ClapTrap();

public:
    ClapTrap( std::string name );
    ~ClapTrap();

    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap& rhs);

    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};


#endif
