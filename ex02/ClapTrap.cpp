#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _name("Default_name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap's default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap's parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap's copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap's copy assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}

	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->_energy_points == 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	this->takeDamage(this->_attack_damage);
	this->_energy_points--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hit_points -= amount;
	if (this->_hit_points <= 0)
		std::cout << ", causing " << amount << " points of damage and died" << std::endl;
	else
		std::cout << ", causing " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energy_points == 0 || this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired with " << amount << " points" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}

std::string	ClapTrap::get_name()
{
	return this->_name;
}

void		ClapTrap::set_name( std::string name )
{
	this->_name = name;
}

int		ClapTrap::get_hit_points()
{
	return this->_hit_points;
}

void	ClapTrap::set_hit_points( int v )
{
	this->_hit_points = v;
}

int		ClapTrap::get_energy_points()
{
	return this->_energy_points;
}

void	ClapTrap::set_energy_points( int v )
{
	this->_energy_points = v;
}

int		ClapTrap::get_attack_damage()
{
	return this->_attack_damage;
}

void	ClapTrap::set_attack_damage( int v )
{
	this->_attack_damage = v;
}
