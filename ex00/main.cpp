#include <iostream>
#include "ClapTrap.hpp"

void	test00( void )
{
	std::cout << "TEST00" << std::endl;
	ClapTrap claptrap( "clap_trap" );

	std::cout << "ClapTrap "<< claptrap.get_name() << "'s hit points: " << claptrap.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s energy points: " << claptrap.get_energy_points() << std::endl;
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s attack damage: " << claptrap.get_attack_damage() << std::endl;
	claptrap.attack( "another_clap_trap" );
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s hit points: " << claptrap.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s energy points: " << claptrap.get_energy_points() << std::endl;
	claptrap.beRepaired( 2 );
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s hit points: " << claptrap.get_hit_points() << std::endl;
	std::cout << "ClapTrap "<< claptrap.get_name() << "'s energy points: " << claptrap.get_energy_points() << std::endl;
}


int	main( void ) {

	test00();

	return 0;
}