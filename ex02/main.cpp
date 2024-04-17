#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	ClapTrap Ct("gui");
	ScavTrap St("lucas");
	FragTrap Ft("diogo");
	Ct.attack("another Clav");
	St.attack("another Scav");
	Ft.attack("another Frag");
	St.takeDamage(5);
	St.beRepaired(5);
	St.takeDamage(10);
	St.beRepaired(17);
	for (int i = 0; i < 8; i++)
		Ft.attack("another Frag");		
}