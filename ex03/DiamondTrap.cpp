#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hit_points = FragTrap::get_hit_points();
	_energy_points = ScavTrap::get_energy_points();
	_attack_damage = FragTrap::get_attack_damage();
	ScavTrap::attack("target");
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap's copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
}

void	DiamondTrap::whoAmI()
{
	std::cout << "this->_name: "
			  << this->_name 
			  << ", ClapTrap::get_name(): "
			  << ClapTrap::get_name() 
			  << std::endl;
}
