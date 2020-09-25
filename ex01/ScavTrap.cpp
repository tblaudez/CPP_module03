/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:41:25 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:24:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Basic constructor
ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100),
	_energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20),
	_range_attack_damage(15), _armor_damage_reduction(3) {

	std::cout << "Hey I am a SC4V-TP named " << this->_name << std::endl;
}

// Copy constructor using operator= overload
ScavTrap::ScavTrap(ScavTrap const& src) {

	*this = src;
}

// Operator= overload
ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {

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
ScavTrap::~ScavTrap() {

	std::cout << "Oh no, I'm dying.." << std::endl;
}

std::string	ScavTrap::getname(void) const {

	return this->_name;
}

int	ScavTrap::getHitpoints(void) const {
	
	return this->_hit_points;
}

int	ScavTrap::getMaxHitpoints(void) const {
	
	return this->_max_hit_points;
}

int	ScavTrap::getEnergypoints(void) const {
	
	return this->_energy_points;
}

int	ScavTrap::getmaxEnergypoints(void) const {
	
	return this->_max_energy_points;
}

int	ScavTrap::getLevel(void) const {
	
	return this->_level;
}

int	ScavTrap::getMeleeAttackDamage(void) const {
	
	return this->_melee_attack_damage;
}

int	ScavTrap::getRangeAttackDamage(void) const {
	
	return this->_range_attack_damage;
}

int	ScavTrap::getArmorDamageReduction(void) const {
	
	return this->_armor_damage_reduction;
}


void	ScavTrap::meleeAttack(std::string const& target) const {

	std::cout << this->_name << " punches " << target << " with a boxe glove" << std::endl;
}


void	ScavTrap::rangedAttack(std::string const& target) const {
	std::cout << this->_name << " spits on " << target << std::endl;
}


void	ScavTrap::takeDamage(unsigned int amount) {

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


void	ScavTrap::beRepaired(unsigned int amount) {

	std::cout << this->_name << " is self-reparing !" << std::endl;

	this->_hit_points += amount;

	if (this->_hit_points > this->_max_hit_points) {
		std::cout << this->_name << " is at max HP !" << std::endl;
		this->_hit_points = this->_max_hit_points;
	}
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