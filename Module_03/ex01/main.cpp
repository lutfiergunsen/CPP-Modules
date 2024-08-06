#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap ash( "ergun" );
    ScavTrap ash2( "sen" );

    ash.attack( "kelebek saldırısı" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return 0;
}
