#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->mode = 0;
	std::cout << "A ScavTrap was created!\n";
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->mode = 0;
	std::cout << "ScavTrap " << this->name << " was created!\n";
}

ScavTrap::ScavTrap( ScavTrap const &s ){
	*this = s;
}

ScavTrap& ScavTrap::operator=( ScavTrap const &s )
{
	if (this != &s)
		return (*this);
	name = s.mode;
	return (*this);
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap " << this->name << " was destroyed!\n";
}

void	ScavTrap::guardGate( void ){
	if (this->mode == 0)
	{
		std::cout << "ScavTrap " << this->name << " entered GateKeeper mode!\n";
		this->mode = 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " left GateKeeper mode!\n";
		this->mode = 0;
	}
}

void	ScavTrap::attack( std::string const &target ){
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "ScavTrap has neither energyPoints nor hitPoints left to attack!\n";
	else if (this->energyPoints == 0)
		std::cout << "ScavTrap has no energyPoints to attack!\n";
	else
		std::cout << "ScavTrap has no hitPoints to attack!\n";
}

void ScavTrap::info( void ) const{
	std::cout << "\nScavTrap " << this->name << "'s info:\n";
	std::cout << "Hit Points:\t" << this->hitPoints << std::endl;
	std::cout << "Energy Points:\t" << this->energyPoints << std::endl;
	std::cout << "Attack Damage:\t" << this->attackDamage << "\n\n";
	std::cout << "Guard Mode:\t" ;
	if (this->mode == 0)
		std::cout << "YES" << "\n\n";
	else
		std::cout << "NO" << "\n\n";
}