#pragma once

#include <iostream>
#include <string>
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap const &n);
		DiamondTrap& operator=(const DiamondTrap& n);
		~DiamondTrap( void );

		void	attack(const std::string& target);

		void whoAmI( void );

		void	info( void ) const;
};