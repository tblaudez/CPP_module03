/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:30:01 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:41:38 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream> // cout


ClapTrap::ClapTrap(std::string name, int hit_points, int max_hit_points,
int energy_points, int max_energy_points, int level, int melee_attack_damage,
int range_attack_damage, int armor_damage_reduction) :
_name(name), _hit_points(hit_points), _max_hit_points(max_hit_points),
_energy_points(energy_points), _max_energy_points(max_energy_points),
_level(level), _melee_attack_damage(melee_attack_damage),
_range_attack_damage(range_attack_damage),
_armor_damage_reduction(armor_damage_reduction) {

	std::cout << "Hey, I am a CL4P-TP unit named " << this->_name << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const& src) {

	*this = src;
}


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


ClapTrap::~ClapTrap() {

	std::cout << "Oh no, I , " << this->_name << ", has been destroyed" << std::endl;
}


std::string	ClapTrap::getname() const {

	return this->_name;
}


int	ClapTrap::getHitpoints() const {

	return this->_hit_points;
}


int	ClapTrap::getMaxHitpoints() const {

	return this->_max_hit_points;
}


int	ClapTrap::getEnergypoints() const {

	return this->_energy_points;
}


int	ClapTrap::getmaxEnergypoints() const {

	return this->_max_energy_points;
}


int	ClapTrap::getLevel() const {

	return this->_level;
}


int	ClapTrap::getMeleeAttackDamage() const {

	return this->_melee_attack_damage;
}


int	ClapTrap::getRangeAttackDamage() const {

	return this->_range_attack_damage;
}


int	ClapTrap::getArmorDamageReduction() const {

	return this->_armor_damage_reduction;
}


void	ClapTrap::takeDamage(unsigned int damage) {

	std::cout << this->_name << " is under attack !" << std::endl;

	if (damage <= this->_armor_damage_reduction) {
		std::cout << "Ah ! Can't touch me !" << std::endl;
		return;
	}

	damage -= this->_armor_damage_reduction;
	if (this->_hit_points <= damage) {
		std::cout << "Oh no ! "  << this->_name << " got killed !" << std::endl;
		this->_hit_points = 0;
	}
	else {
		this->_hit_points -= damage;
		std::cout << "Ouch ! It hurts ! " << this->_name << " now has "
		<< this->_hit_points << " HP" << std::endl;
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


void	ClapTrap::meleeAttack(std::string const& target) const {

	std::cout << this->_name << " uses its tiny arms to sratch the arm of " << target
	<< ", dealing " << this->_melee_attack_damage << " points of damage"<< std::endl;
}


void	ClapTrap::rangedAttack(std::string const& target) const {

	std::cout << this->_name << " uses its potator on " << target << ", dealing "
	<< this->_range_attack_damage << " points of damage"<< std::endl;
}
