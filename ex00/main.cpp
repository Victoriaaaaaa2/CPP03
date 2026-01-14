#include <iostream>
#include "ClapTrap.hpp"

void	test00( void )
{
	std::cout << "TEST00" << std::endl;
	ClapTrap a( "clap_trap" );

	std::cout << "ClapTrap "<< a.get_name() << "'s hit points: " << a.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< a.get_name() << "'s energy points: " << a.get_energy_points() << std::endl;
	std::cout << "ClapTrap "<< a.get_name() << "'s attack damage: " << a.get_attack_damage() << std::endl;
	a.attack( "another_clap_trap" );
	std::cout << "ClapTrap "<< a.get_name() << "'s hit points: " << a.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< a.get_name() << "'s energy points: " << a.get_energy_points() << std::endl;
	a.beRepaired( 2 );
	std::cout << "ClapTrap "<< a.get_name() << "'s hit points: " << a.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< a.get_name() << "'s energy points: " << a.get_energy_points() << std::endl;
}


int	main( void ) {

	test00();

	return 0;
}