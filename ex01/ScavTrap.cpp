#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap's parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap's copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_energy_points == 0 || this->_energy_points <= 0)
	{
		std::cout << "ScavTrap " 
				  << this->get_name() 
				  << " can't attack" 
				  << std::endl;
		return;
	}
	std::cout << "ScavTrap " 
			  << this->get_name() 
			  << " attacks " 
			  << target 
			  << ", causing " 
			  << this->_attack_damage 
			  << " points of damage!" 
			  << std::endl;
	this->_energy_points -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " 
			  << this->_name 
			  << " is now in Gate keeper mode" 
			  << std::endl;
}
