#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
public:
	DiamondTrap();
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap & src );
	~DiamondTrap();

	void	whoAmI();
};


