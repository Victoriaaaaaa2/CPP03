#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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

	b.attack( "another_scav_trap" );
	std::cout << "ScavTrap "<< b.get_name() << "'s hit points: " << b.get_hit_points() << std::endl;
	b.beRepaired( 2 );
	std::cout << "ScavTrap "<< b.get_name() << "'s hit points: " << b.get_hit_points() << std::endl;
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

void	test03( void )
{
	std::cout << "TEST03" << std::endl;
	DiamondTrap	diamondtrap( "diamond_trap" );

	diamondtrap.attack( "another_frag_trap" );
	std::cout << "Hit points: " << diamondtrap.get_hit_points() << std::endl;
	diamondtrap.beRepaired( 2 );
	std::cout << "Hit points: " << diamondtrap.get_hit_points() << std::endl;
	diamondtrap.whoAmI();		
}

int	main( void ) {

	test00();
	test01();
	test02();
	test03();

	return 0;
}