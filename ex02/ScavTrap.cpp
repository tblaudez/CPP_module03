/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:51:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:17:53 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Basic constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {

	std::cout << "Well no ! I was in fact a SC4V-TP unit !" << std::endl;
}

// Copy constructor using operator= overload
ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {

	*this = src;
}

// Operator= overload
ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}

	return *this;
}

// Destructor
ScavTrap::~ScavTrap() {

	std::cout << "Argg. You're allowed to pass the gates.." << std::endl;
}


void	ScavTrap::challengeNewcommer(std::string const& target) {

	if (this->_energy_points < 25) {
		std::cout << "...Not enough energy. It happens sometime." << std::endl;
		return;
	}

	switch (rand() % 7) {
		case 0:
			std::cout << this->_name << " laughs at " << target << std::endl;break;
		
		case 1:
			std::cout << this->_name << " challenges " << target << " to a game of charade" << std::endl;break;

		case 2:
			std::cout << this->_name << " pretends to shake " << target << "'s hand but comb its non-existent hair instead" << std::endl;break;

		case 3:
			std::cout << this->_name << " monologues for hours. " << target << " does not wait and passes the doors" << std::endl;break;
		
		case 4:
			std::cout << this->_name << " fires a water gun on " << target << "... It's not very effective" << std::endl;break;

		case 5:
			std::cout << this->_name << " turns into a ghost robot and does nothing since it can't touch anything " << target << std::endl;break;
		
		case 6:
			std::cout << this->_name << " run away screaming. " << target << " is confused.." << std::endl;break;
		
		default:
			break;
	}
}

void	ScavTrap::meleeAttack(std::string const& target) const {

	std::cout << this->_name << " uses its tiny arms to sratch the arm of " << target << std::endl;
}


void	ScavTrap::rangedAttack(std::string const& target) const {

	std::cout << this->_name << " uses its potator on " << target << std::endl;
}