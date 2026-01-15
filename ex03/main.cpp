#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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

void	test01( void )
{
	std::cout << "TEST01" << std::endl;
	ScavTrap	scavtrap( "scav_trap" );

	std::cout << "ScavTrap " << scavtrap.get_name() << "'s hit points: " << scavtrap.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << scavtrap.get_name() << "'s energy points: " << scavtrap.get_energy_points() << std::endl;
	std::cout << "ScavTrap " << scavtrap.get_name() << "'s attack damage: " << scavtrap.get_attack_damage() << std::endl;
	scavtrap.attack( "another_scav_trap" );
	std::cout << "ScavTrap "<< scavtrap.get_name() << "'s hit points: " << scavtrap.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << scavtrap.get_name() << "'s energy points: " << scavtrap.get_energy_points() << std::endl;
	scavtrap.beRepaired( 2 );
	std::cout << "ScavTrap "<< scavtrap.get_name() << "'s hit points: " << scavtrap.get_hit_points() << std::endl;
	std::cout << "ScavTrap " << scavtrap.get_name() << "'s energy points: " << scavtrap.get_energy_points() << std::endl;
	scavtrap.guardGate();
}

void	test02( void )
{
	std::cout << "TEST02" << std::endl;
	FragTrap	fragtrap( "frag_trap" );

	std::cout << "FragTrap " << fragtrap.get_name() << "'s hit points: " << fragtrap.get_hit_points() << std::endl;
	std::cout << "FragTrap " << fragtrap.get_name() << "'s energy points: " << fragtrap.get_energy_points() << std::endl;
	std::cout << "FragTrap " << fragtrap.get_name() << "'s attack damage: " << fragtrap.get_attack_damage() << std::endl;
	fragtrap.attack( "another_frag_trap" );
	std::cout << "FragTrap " << fragtrap.get_name() << "'s hit points: " << fragtrap.get_hit_points() << std::endl;
	std::cout << "FragTrap " << fragtrap.get_name() << "'s energy points: " << fragtrap.get_energy_points() << std::endl;
	fragtrap.beRepaired( 2 );
	std::cout << "FragTrap " << fragtrap.get_name() << "'s hit points: " << fragtrap.get_hit_points() << std::endl;
	std::cout << "FragTrap " << fragtrap.get_name() << "'s energy points: " << fragtrap.get_energy_points() << std::endl;
	fragtrap.highFiveGuys();	
}

void	test03( void )
{
	std::cout << "TEST03" << std::endl;
	DiamondTrap	diamondtrap( "diamond_trap" );

	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s hit points: " << diamondtrap.get_hit_points() << std::endl;
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s energy points: " << diamondtrap.get_energy_points() << std::endl;
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s attack damage: " << diamondtrap.get_attack_damage() << std::endl;
	diamondtrap.attack( "another_frag_trap" );
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s hit points: " << diamondtrap.get_hit_points() << std::endl;
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s energy points: " << diamondtrap.get_energy_points() << std::endl;
	diamondtrap.beRepaired( 2 );
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s hit points: " << diamondtrap.get_hit_points() << std::endl;
	std::cout << "DiamondTrap " << diamondtrap.get_name() << "'s energy points: " << diamondtrap.get_energy_points() << std::endl;
	diamondtrap.whoAmI();		
}

int	main( void ) {

	test00();
	test01();
	test02();
	test03();

	return 0;
}
