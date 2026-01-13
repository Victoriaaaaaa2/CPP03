#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap's default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
	std::cout << "FragTrap's parametric constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap's copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Positive high-fives request" << std::endl;
}
