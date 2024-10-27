#pragma once

#include <iostream>
#include <string>

class ClapTrap{
	private:
		int			hitPoints;
		std::string	name;
		int			energyPoints;
		int			attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string );
		ClapTrap( ClapTrap const & );
		ClapTrap& operator=( ClapTrap const & );
		~ClapTrap( void );

	void	attack( std::string const & );
	void	takeDamage( unsigned int );
	void	beRepaired( unsigned int );
	void	info( void ) const;
};