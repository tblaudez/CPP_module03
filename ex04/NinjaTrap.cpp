/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:13:49 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 14:46:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

// Default constructor
NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 5, 0) {

	std::cout << "Yaoiii, Ninja Claptrap-jutsu !!!" << std::endl;
}

// Copy constructor using operator= overload
NinjaTrap::NinjaTrap(NinjaTrap const& src) {

	*this = src;
}

// Operator= overload
NinjaTrap&	NinjaTrap::operator=(NinjaTrap const& rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}

	return *this;
}

// Destructor
NinjaTrap::~NinjaTrap(void) {

	std::cout << "Masaka..." << std::endl;
}


void	NinjaTrap::ninjaShoebox(ClapTrap const& target) const {
	
	std::cout << this->_name << " speaks janapese to the CL4P-TP unit " << target.getname() << std::endl;	
}


void	NinjaTrap::ninjaShoebox(FragTrap const& target) const {
	
	std::cout << this->_name << " draws its katana and jump without warning on " << target.getname() << std::endl;
}


void	NinjaTrap::ninjaShoebox(ScavTrap const& target) const {
	
	std::cout << this->_name << " dispears using a smoke bomb, leaving " << target.getname() << " clueless" << std::endl;
}


void	NinjaTrap::ninjaShoebox(NinjaTrap const& target) const {
	
	std::cout << this->_name << " prepares some tea and offer a cup to " << target.getname() << std::endl;
}


void	NinjaTrap::meleeAttack(std::string const& target) const {

	std::cout << this->_name << " uses powerful taijutsu on " << target << std::endl;
}


void	NinjaTrap::rangedAttack(std::string const& target) const {

	std::cout << this->_name << " uses a secret ninjutsu on " << target << std::endl;
}