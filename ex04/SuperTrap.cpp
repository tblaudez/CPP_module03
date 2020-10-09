/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:35:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 17:40:39 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(), NinjaTrap() {

	/*
	**	We can't initialize the ClapTrap instance with the stats of the
	**	FragTrap and NinjaTrap because we need the ClapTrap instance to
	**	instanciate the FragTrap and NinjaTrap..
	**	Solution is to create 2 temporary instance and use their that to
	**	initialize the SuperTrap.
	*/

	FragTrap	frag;
	NinjaTrap	ninja;

	this->_hit_points = frag.getHitpoints();
	this->_max_hit_points = frag.getMaxHitpoints();
	this->_energy_points = ninja.getEnergypoints();
	this->_max_energy_points = ninja.getmaxEnergypoints();
	this->_level = 1;
	this->_melee_attack_damage = ninja.getMeleeAttackDamage();
	this->_range_attack_damage = frag.getRangeAttackDamage();
	this->_armor_damage_reduction = frag.getArmorDamageReduction();
}


SuperTrap::SuperTrap(SuperTrap const& src) {

	*this = src;
}


SuperTrap&	SuperTrap::operator=(SuperTrap const& rhs) {

	if (this != &rhs) {
		FragTrap::operator=(rhs);
		NinjaTrap::operator=(rhs);
	}

	return *this;
}


SuperTrap::~SuperTrap() {

}
