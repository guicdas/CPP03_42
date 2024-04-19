#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), name(""), energyPoints(10), attackDamage(0){
	std::cout << "A ClapTrap" << " was created!\n";
}

ClapTrap::ClapTrap(std::string name) : hitPoints(10), name(name), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap " << this->name << " was created!\n";
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " was destroyed!\n";
}

ClapTrap::ClapTrap( ClapTrap const &n){
	*this = n;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& n)
{	
    if (this != &n)
    {
        name = n.name;
        hitPoints = n.hitPoints;
        energyPoints = n.energyPoints;
        attackDamage = n.attackDamage;
    }
    return *this;
}

void	ClapTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "ClapTrap has neither energyPoints nor hitPoints left to attack " << target << "!\n";
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap has no energyPoints to attack " << target << "!\n";
	else
		std::cout << "ClapTrap has no hitPoints to attack " << target << "!\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->name << " is hit with " << amount << " points of damage, ";
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		std::cout << "and died!\n";
	else
		std::cout << "and has " << this->hitPoints << " hitpoints left!\n";
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hitpoints.\n";
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints == 0 && this->hitPoints == 0)
		std::cout << "ClapTrap has neither energy nor hitPoints left to be repaired!\n";
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap has no energy to be repaired!\n";
	else
		std::cout << "ClapTrap has no hitPoints to be repaired!\n";
}

void ClapTrap::info( void ) const{
	std::cout << "\nClapTrap " << this->name << "'s info:\n";
	std::cout << "Hit Points:\t" << this->hitPoints << std::endl;
	std::cout << "Energy Points:\t" << this->energyPoints << std::endl;
	std::cout << "Attack Damage:\t" << this->attackDamage << "\n\n";
}