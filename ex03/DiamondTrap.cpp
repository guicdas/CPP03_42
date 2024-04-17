#include "includes/DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(){
	std::cout << "A DiamondTrap was created!\n";
	this->attackDamage = ;	
}

DiamondTrap::DiamondTrap(std::string name) : hitPoints(10), energyPoints(10), attackDamage(0){
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " was created!\n";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " was destroyed!\n";
}

DiamondTrap::DiamondTrap( DiamondTrap const &n){
	std::cout << "DiamondTrap " << this->name << " copy constructor called!\n";
	*this = n;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& n)
{
	std::cout << "DiamondTrap " << this->name << " copy assignment operator called!\n";
    if (this != &n)
    {
        name = n.name;
        hitPoints = n.hitPoints;
        energyPoints = n.energyPoints;
        attackDamage = n.attackDamage;
    }
    return *this;
}

void	DiamondTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "DiamondTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "DiamondTrap has neither energyPoints nor hitPoints left to attack!\n";
	else if (this->energyPoints == 0)
		std::cout << "DiamondTrap has no energyPoints to attack!\n";
	else
		std::cout << "DiamondTrap has no hitPoints to attack!\n";
}

void	DiamondTrap::takeDamage(unsigned int amount){
	std::cout << "DiamondTrap " << this->name << " is hit with " << amount << " points of damage, ";
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		std::cout << "and died!\n";
	else
		std::cout << "and has " << this->hitPoints << " hitPoints left!\n";
}

void	DiamondTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0)
	{
		std::cout << "DiamondTrap " << this->name << " repairs itself for " << amount << " hitpoints.\n";
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "DiamondTrap has neither energy nor hitPoints left to be repaired!\n";
	else if (this->energyPoints == 0)
		std::cout << "DiamondTrap has no energy to  be repaired!\n";
	else
		std::cout << "DiamondTrap has no hitPoints to be repaired!\n";
}

void DiamondTrap::info( void ) const{
	std::cout << "\nDiamondTrap " << this->name << "'s info:\n";
	std::cout << "Hit Points:\t" << this->hitPoints << std::endl;
	std::cout << "Energy Points:\t" << this->energyPoints << std::endl;
	std::cout << "Attack Damage:\t" << this->attackDamage << "\n\n";
}