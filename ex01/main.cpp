/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 10:53:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	frag.takeDamage(9999);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");
	std::cout << "------------" << std::endl;

	return 0;
}
