#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ClapTrap Ct("gui");
	ScavTrap St("lucas");
	Ct.attack("another Clav");
	St.attack("another Scav");
	St.info();
	St.takeDamage(5);
	St.beRepaired(5);
	St.takeDamage(100);
	St.info();
	St.beRepaired(17);
	St.info();
	for (int i = 0; i < 48; i++)
		St.attack("another Scav");
	St.takeDamage(17);
	St.attack("somebody");
	St.info();
}