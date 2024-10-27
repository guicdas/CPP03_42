#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string );
		FragTrap( FragTrap const & );
		FragTrap& operator=( FragTrap const & );
		~FragTrap( void );

	void	highFivesGuys( void );
	void	info( void ) const;
};