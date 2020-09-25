/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:03:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void) {

	srand(time(0));

	ScavTrap	scap("Scappy");
	std::cout << "------------" << std::endl;
	scap.rangedAttack("TORGUE");
	scap.meleeAttack("a puppy");
	scap.takeDamage(25);
	scap.beRepaired(50);
	scap.challengeNewcommer("Mike Tyson");

	std::cout << std::endl;
	FragTrap	frag("Fraggy");
	std::cout << "------------" << std::endl;
	frag.rangedAttack("some skags");
	frag.meleeAttack("Jack himself");
	frag.takeDamage(9999);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");
	
	std::cout << std::endl;
	NinjaTrap	ninja("Ninja");
	std::cout << "------------" << std::endl;
	ninja.rangedAttack("a sniper");
	ninja.meleeAttack("a rock");
	ninja.takeDamage(25);
	ninja.beRepaired(50);
	ninja.ninjaShoebox(scap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(ninja);

	std::cout << std::endl;
	return 0;
}