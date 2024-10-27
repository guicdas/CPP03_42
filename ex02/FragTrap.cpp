#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name){
	std::cout << "FragTrap " << this->name << " was created!\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}


FragTrap::FragTrap( void ) : ClapTrap(){
	std::cout << "A FragTrap was created!\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}


FragTrap::FragTrap( FragTrap const &n ){
	std::cout << "FragTrap " << this->name << " copy constructor called!\n";
	*this = n;
}

FragTrap& FragTrap::operator=( FragTrap const &n )
{
	std::cout << "FragTrap " << this->name << " copy assignment operator called!\n";
	if (this != &n)
		return (*this);
	name = n.name;
	hitPoints = n.hitPoints;
	energyPoints = n.energyPoints;
	attackDamage = n.attackDamage;
	return (*this);
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap " << this->name << " was destroyed!\n";
}

void FragTrap::highFivesGuys( void ){
	std::cout << "FragTrap "<< this->name << " asks : \"High Five guys?\"\n";
}

void FragTrap::info( void ) const{
	std::cout << "\nFragTrap " << this->name << "'s info:\n";
	std::cout << "Hit Points:\t" << this->hitPoints << std::endl;
	std::cout << "Energy Points:\t" << this->energyPoints << std::endl;
	std::cout << "Attack Damage:\t" << this->attackDamage << "\n\n";
}