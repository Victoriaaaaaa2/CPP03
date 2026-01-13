#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap & src );
	~ClapTrap( void );

	ClapTrap &	operator=( ClapTrap const & rhs );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	std::string	get_name();
	void		set_name( std::string name );
	int			get_hit_points();
	void		set_hit_points( int v );
	int			get_energy_points();
	void		set_energy_points( int v );
	int			get_attack_damage();
	void		set_attack_damage( int v );
};

#endif
