#include <iostream>
#include "ScavTrap.hpp"

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

void	test01( void )
{
	std::cout << "TEST01" << std::endl;
	ScavTrap	b( "scav_trap" );

	std::cout << "ScavTrap " << b.get_name() << "'s hit points: " << b.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << b.get_name() << "'s energy points: " << b.get_energy_points() << std::endl;
	std::cout << "ScavTrap " << b.get_name() << "'s attack damage: " << b.get_attack_damage() << std::endl;
	b.attack( "another_scav_trap" );
	std::cout << "ScavTrap "<< b.get_name() << "'s hit points: " << b.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << b.get_name() << "'s energy points: " << b.get_energy_points() << std::endl;
	b.beRepaired( 2 );
	std::cout << "ScavTrap "<< b.get_name() << "'s hit points: " << b.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << b.get_name() << "'s energy points: " << b.get_energy_points() << std::endl;
	b.guardGate();
}

int	main( void ) {

	test00();
	test01();

	return 0;
}