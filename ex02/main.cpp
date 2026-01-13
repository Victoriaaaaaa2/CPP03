#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	test00( void )
{
	std::cout << "TEST00" << std::endl;
	ClapTrap a( "clap_trap" );

	a.attack( "another_clap_trap" );
	std::cout << "Hit points: " << a.get_hit_points() << std::endl;
	a.beRepaired( 2 );
	std::cout << "Hit points: " << a.get_hit_points() << std::endl;
}

void	test01( void )
{
	std::cout << "TEST01" << std::endl;
	ScavTrap	b( "scav_trap" );

	b.attack( "another_scav_trap" );
	std::cout << "Hit points: " << b.get_hit_points() << std::endl;
	b.beRepaired( 2 );
	std::cout << "Hit points: " << b.get_hit_points() << std::endl;
	b.guardGate();
}

void	test02( void )
{
	std::cout << "TEST02" << std::endl;
	FragTrap	fragtrap( "frag_trap" );

	fragtrap.attack( "another_frag_trap" );
	std::cout << "Hit points: " << fragtrap.get_hit_points() << std::endl;
	fragtrap.beRepaired( 2 );
	std::cout << "Hit points: " << fragtrap.get_hit_points() << std::endl;
	fragtrap.highFiveGuys();	
}

int	main( void ) {

	test00();
	test01();
	test02();

	return 0;
}