/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:51:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:16:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream> // cout
#include <cstdlib> // rand


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {

	std::cout << "Well no ! I was in fact a SC4V-TP unit !" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {

	*this = src;
}


ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}

	return *this;
}


ScavTrap::~ScavTrap() {

	std::cout << "Argg. You're allowed to pass the gates.." << std::endl;
}


void	ScavTrap::challengeNewcommer(std::string const& target) const {

	if (this->_energy_points < 25) {
		std::cerr << "...Not enough energy. It happens sometime." << std::endl;
		return;
	}

	int	const choice = rand() % 78 % 25 % 15 % 7; // Ugly trick to beat a hair-pulling bug

	switch (choice) {
		case 0:
			std::cout << this->_name << " laughs at " << target << std::endl;
			break;

		case 1:
			std::cout << this->_name << " challenges " << target << " to a game of charade"
			<< std::endl;
			break;

		case 2:
			std::cout << this->_name << " pretends to shake " << target
			<< "'s hand but comb its non-existent hair instead" << std::endl;
			break;

		case 3:
			std::cout << this->_name << " monologues for hours. " << target
			<< " does not wait and passes the doors" << std::endl;
			break;

		case 4:
			std::cout << this->_name << " fires a water gun on " << target
			<< "... It's not very effective" << std::endl;
			break;

		case 5:
			std::cout << this->_name << " turns into a ghost robot and does nothing" <<
			" since it can't touch " << target << std::endl;
			break;

		case 6:
			std::cout << this->_name << " run away screaming. " << target
			<< " is confused.." << std::endl;
			break;

		default:
			break;
	}
}
