#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap(name + "_clap_name"), 
	  ScavTrap(name), 
	  FragTrap(name),
	  _name(name)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap's parametric constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap's copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "this->_name: "
			  << this->_name 
			  << ", ClapTrap::_name: "
			  << ClapTrap::_name 
			  << std::endl;
}
