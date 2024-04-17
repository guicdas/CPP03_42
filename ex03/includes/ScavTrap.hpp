#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		int mode;
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &n);
		ScavTrap& operator=(const ScavTrap &N);
		~ScavTrap( void );

		void	attack(const std::string& target);

		void	guardGate(void);

		void	info(void) const;
};