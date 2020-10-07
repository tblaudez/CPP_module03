/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 15:02:56 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <cstdlib> // srand
#include <ctime> // time

int	main(void) {

	srand(time(0));

	FragTrap	frag("FR4G-TP");

	frag.rangedAttack("some skags");
	frag.meleeAttack("Jack himself");
	frag.takeDamage(9999);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");

	return 0;
}
