#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	std::cout << "ScavTrap " << this->name << " was created!\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->mode = 0;
}

ScavTrap::ScavTrap( ScavTrap const &n) {
	std::cout << "ScavTrap " << this->name << " copy constructor called!\n";
	*this = n;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& n)
{
	std::cout << "ScavTrap " << this->name << " copy assignment operator called!\n";
    if (this != &n)
    {
        name = n.name;
        hitPoints = n.hitPoints;
        energyPoints = n.energyPoints;
        attackDamage = n.attackDamage;
		mode = n.mode;
    }
    return *this;
}

ScavTrap::ScavTrap( void ) : ClapTrap(){
	std::cout << "A ScavTrap was created!\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->mode = 0;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " was destroyed!\n";
}

void	ScavTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "ScavTrap has neither energyPoints nor hitPoints left to attack " << target << "!\n";
	else if (this->energyPoints == 0)
		std::cout << "ScavTrap has no energyPoints to attack " << target << "!\n";
	else
		std::cout << "ScavTrap has no hitPoints to attack " << target << "!\n";
}

void ScavTrap::guardGate(){
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