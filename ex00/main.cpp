#include "ClapTrap.hpp"

int main(){
	std::string name;

	std::cout << "Claptrap's name? :\t";
	std::cin >> name;
	std::cout << std::endl;
	ClapTrap Ct(name);
	Ct.info();
	Ct.attack("the other one");
	Ct.takeDamage(5);
	Ct.beRepaired(5);
	Ct.takeDamage(10);
	Ct.attack("some ClapTrap");
	Ct.info();
	Ct.beRepaired(17);
	Ct.info();
	for (int i = 0; i < 8; i++)
		Ct.attack("another Clav");
	Ct.takeDamage(17);
	Ct.attack("somebody");
	Ct.info();
	
}