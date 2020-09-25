/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:35:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 15:58:11 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// Basic constructor
SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(), NinjaTrap() {

	FragTrap	tmp1;
	NinjaTrap	tmp2;

	this->_hit_points = tmp1.getHitpoints();
	this->_max_hit_points = tmp1.getMaxHitpoints();
	this->_energy_points = tmp2.getEnergypoints();
	this->_max_energy_points = tmp2.getmaxEnergypoints();
	this->_level = 1;
	this->_melee_attack_damage = tmp2.getMeleeAttackDamage();
	this->_range_attack_damage = tmp1.getRangeAttackDamage();
	this->_armor_damage_reduction = tmp1.getArmorDamageReduction();
}

// Copy constructor using operator= overload
SuperTrap::SuperTrap(SuperTrap const& src) {

	*this = src;
}

// Operator= overload
SuperTrap&	SuperTrap::operator=(SuperTrap const& rhs) {

	if (this != &rhs) {
		FragTrap::operator=(rhs);
		NinjaTrap::operator=(rhs);
	}

	return *this;
}

// Destructor
SuperTrap::~SuperTrap() {

}

void	SuperTrap::rangedAttack(std::string const& target) const {

	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const& target) const {

	NinjaTrap::meleeAttack(target);
}
