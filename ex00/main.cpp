/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:56:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:26:15 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"

int	main(void) {

	srand(time(0));

	FragTrap	frag("Fraggy");
	std::cout << "------------" << std::endl;
	frag.rangedAttack("some skags");
	frag.meleeAttack("Jack himself");
	frag.takeDamage(9999);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("The Vault Hunter");

	std::cout << std::endl;
	return 0;
}