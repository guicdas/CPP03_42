#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		int	mode;

	public:
		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( ScavTrap const & );
		ScavTrap& operator=( ScavTrap const & );
		~ScavTrap( void );

	void	attack( std::string const & );
	void	guardGate( void );
	void	info( void ) const;
};