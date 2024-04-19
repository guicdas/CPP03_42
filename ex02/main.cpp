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
	Ft.info();
	Ft.takeDamage(5);
	Ft.beRepaired(5);
	Ft.takeDamage(10);
	Ft.info();
	Ft.beRepaired(17);
	Ft.info();
	for (int i = 0; i < 49; i++)
		Ft.attack("another Frag");
	Ft.info();
	Ft.takeDamage(107);
	Ft.info();
	Ft.attack("someone");
}