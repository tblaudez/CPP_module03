/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:41:25 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:08:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream> // cout
#include <cstdlib> // rand


FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {

	std::cout << "Psych ! I was a FR4G-TP unit since the beginning ! " << std::endl;
}


FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {

	*this = src;
}


FragTrap&	FragTrap::operator=(FragTrap const& rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}

	return *this;
}


FragTrap::~FragTrap() {

	std::cout << "What ? I die ? Noooooo !" << std::endl;
}


void	FragTrap::vaulthunter_dot_exe(std::string const& target) const {

	if (this->_energy_points < 25) {
		std::cerr << "...Not enough energy. It happens sometime." << std::endl;
		return;
	}

	int	const choice = rand() % 78 % 25 % 15 % 7; // Ugly trick to beat a hair-pulling bug

	switch (choice) {
		case 0:
			std::cout << this->_name << " becomes a wizard and cast ligthnings on " << target << std::endl;
			break;

		case 1:
			std::cout << this->_name << " self-destructs and kills " << target << std::endl;
			break;

		case 2:
			std::cout << this->_name << " sings so bad that everyone and "
			<< target << " team up to shut it up" << std::endl;
			break;

		case 3:
			std::cout << this->_name << " insults " << target << std::endl;
			break;

		case 4:
			std::cout << this->_name << " USES A TORGUE GUN TO DESTROY " << target << std::endl;
			break;

		case 5:
			std::cout << this->_name << " turns invisible and to avoid " << target << std::endl;
			break;

		case 6:
			std::cout << this->_name << " bakes a delicious pie that nearly kill " << target << std::endl;
			break;

		default:
			break;
	}
}
