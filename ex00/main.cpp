#include <iostream>
#include "ClapTrap.hpp"

void	test00( void )
{
	std::cout << "TEST00" << std::endl;
	ClapTrap a( "clap_trap" );

	a.attack( "another_clap_trap" );
	std::cout << "Hit points: " << a.get_hit_points() << std::endl;
	a.beRepaired( 2 );
	std::cout << "Hit points: " << a.get_hit_points() << std::endl;
}


int	main( void ) {

	test00();

	return 0;
}