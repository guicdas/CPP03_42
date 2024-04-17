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
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const &n);
		ClapTrap& operator=(const ClapTrap& n);
		~ClapTrap( void );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	info( void ) const;
};