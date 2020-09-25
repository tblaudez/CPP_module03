/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:30:01 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:13:07 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Basic constructor
ClapTrap::ClapTrap(std::string name, int hit_points, int max_hit_points,
	int energy_points, int max_energy_points, int level, int melee_attack_damage,
	int range_attack_damage, int armor_damage_reduction)
	:
	_name(name), _hit_points(hit_points), _max_hit_points(max_hit_points),
	_energy_points(energy_points), _max_energy_points(max_energy_points),
	_level(level), _melee_attack_damage(melee_attack_damage),
	_range_attack_damage(range_attack_damage),
	_armor_damage_reduction(armor_damage_reduction) {

	std::cout << "Hey, I am a CL4P-TP unit named " << this->_name << std::endl;
}

// Copy constructor using operator= overload
ClapTrap::ClapTrap(ClapTrap const& src) {

	*this = src;
}

// Operator= overload
ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_max_hit_points = rhs._max_hit_points;
		this->_energy_points = rhs._energy_points;
		this->_max_energy_points = rhs._max_energy_points;
		this->_level = rhs._level;
		this->_melee_attack_damage = rhs._melee_attack_damage;
		this->_range_attack_damage = rhs._range_attack_damage;
		this->_armor_damage_reduction = rhs._armor_damage_reduction;
	}

	return *this;
}

// Destructor
ClapTrap::~ClapTrap() {

	std::cout << "Oh no, I , " << this->_name << ", has been destroyed" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << this->_name << " is under attack !" << std::endl;

	if (amount <= this->_armor_damage_reduction) {
		std::cout << "Ah ! It did nothing !" << std::endl;
		return;
	}

	this->_hit_points -= (amount - this->_armor_damage_reduction);
	std::cout << "Ouch ! It hurts !" << std::endl;

	if (this->_hit_points <= 0) {
		std::cout << "Oh no ! "  << this->_name << " got hit to the ground !" << std::endl;
		this->_hit_points = 0;
	}
}


void	ClapTrap::beRepaired(unsigned int amount) {

	std::cout << this->_name << " is self-reparing !" << std::endl;

	this->_hit_points += amount;

	if (this->_hit_points > this->_max_hit_points) {
		std::cout << this->_name << " is at max HP !" << std::endl;
		this->_hit_points = this->_max_hit_points;
	}
}

std::string	ClapTrap::getname(void) const {

	return this->_name;
}

int	ClapTrap::getHitpoints(void) const {
	
	return this->_hit_points;
}

int	ClapTrap::getMaxHitpoints(void) const {
	
	return this->_max_hit_points;
}

int	ClapTrap::getEnergypoints(void) const {
	
	return this->_energy_points;
}

int	ClapTrap::getmaxEnergypoints(void) const {
	
	return this->_max_energy_points;
}

int	ClapTrap::getLevel(void) const {
	
	return this->_level;
}

int	ClapTrap::getMeleeAttackDamage(void) const {
	
	return this->_melee_attack_damage;
}

int	ClapTrap::getRangeAttackDamage(void) const {
	
	return this->_range_attack_damage;
}

int	ClapTrap::getArmorDamageReduction(void) const {
	
	return this->_armor_damage_reduction;
}
