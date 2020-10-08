/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 10:38:12 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <cstdlib> // srand
#include <ctime> // time


int	main(void) {

	srand(time(0));

	FragTrap	frag;

	frag.rangedAttack("some skags");
	frag.meleeAttack("Handsome Jack");
	frag.takeDamage(42);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");

	return 0;
}
