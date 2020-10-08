/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:36:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

#include <cstdlib> // srand
#include <ctime> // time
#include <iostream> // cout


int	main(void) {

	srand(time(0));

	ScavTrap	scap;
	scap.rangedAttack("TORGUE");
	scap.meleeAttack("a puppy");
	scap.takeDamage(25);
	scap.beRepaired(50);
	scap.challengeNewcommer("Mike Tyson");
	std::cout << "------------" << std::endl;

	FragTrap	frag;
	frag.rangedAttack("some skags");
	frag.meleeAttack("Jack himself");
	frag.takeDamage(33);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");
	std::cout << "------------" << std::endl;

	ClapTrap	clap;
	clap.rangedAttack("birds");
	clap.meleeAttack("Michael Jackson");
	clap.takeDamage(50);
	clap.beRepaired(50);
	std::cout << "------------" << std::endl;

	NinjaTrap	ninja;
	ninja.rangedAttack("Kabuto");
	ninja.meleeAttack("Jiraya");
	ninja.takeDamage(46);
	ninja.beRepaired(50);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(scap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(ninja);
	std::cout << "------------" << std::endl;

	SuperTrap	super;
	super.rangedAttack("birds");
	super.meleeAttack("Michael Jackson");
	super.takeDamage(50);
	super.beRepaired(50);
	super.vaulthunter_dot_exe("God");
	super.ninjaShoebox(clap);
	super.ninjaShoebox(scap);
	super.ninjaShoebox(frag);
	super.ninjaShoebox(ninja);
	std::cout << "------------" << std::endl;

	return 0;
}
