#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap( std::string name);
		FragTrap(const FragTrap &n);
		FragTrap& operator=(const FragTrap &n);
		~FragTrap();

		void	highFivesGuys( void );

		void  info( void ) const;
};