/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:41:25 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:23:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Basic constructor
FragTrap::FragTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100),
	_energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20),
	_range_attack_damage(15), _armor_damage_reduction(3) {

	std::cout << "Yo ! I am a FR4G-TP unit named " << this->_name << std::endl;
}

// Copy constructor using operator= overload
FragTrap::FragTrap(FragTrap const& src) {

	*this = src;
}

// Operator= overload
FragTrap&	FragTrap::operator=(FragTrap const& rhs) {

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
FragTrap::~FragTrap() {

	std::cout << "Nooo It can't be !!!" << std::endl;
}

std::string	FragTrap::getname(void) const {

	return this->_name;
}

int	FragTrap::getHitpoints(void) const {
	
	return this->_hit_points;
}

int	FragTrap::getMaxHitpoints(void) const {
	
	return this->_max_hit_points;
}

int	FragTrap::getEnergypoints(void) const {
	
	return this->_energy_points;
}

int	FragTrap::getmaxEnergypoints(void) const {
	
	return this->_max_energy_points;
}

int	FragTrap::getLevel(void) const {
	
	return this->_level;
}

int	FragTrap::getMeleeAttackDamage(void) const {
	
	return this->_melee_attack_damage;
}

int	FragTrap::getRangeAttackDamage(void) const {
	
	return this->_range_attack_damage;
}

int	FragTrap::getArmorDamageReduction(void) const {
	
	return this->_armor_damage_reduction;
}


void	FragTrap::meleeAttack(std::string const& target) const {

	std::cout << this->_name << " strikes " << target << " with a huge hammer" << std::endl;
}


void	FragTrap::rangedAttack(std::string const& target) const {
	std::cout << this->_name << " 360-no-scope-headshots " << target << std::endl;
}


void	FragTrap::takeDamage(unsigned int amount) {

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


void	FragTrap::beRepaired(unsigned int amount) {

	std::cout << this->_name << " is self-reparing !" << std::endl;

	this->_hit_points += amount;

	if (this->_hit_points > this->_max_hit_points) {
		std::cout << this->_name << " is at max HP !" << std::endl;
		this->_hit_points = this->_max_hit_points;
	}
}


void	FragTrap::vaulthunter_dot_exe(std::string const& target) {

	if (this->_energy_points < 25) {
		std::cout << "...Not enough energy. It happens sometime." << std::endl;
		return;
	}

	switch (rand() % 7) {
		case 0:
			std::cout << this->_name << " becomes a wizard and cast ligthnings on " << target << std::endl;break;
		
		case 1:
			std::cout << this->_name << " self-destructs and kills " << target << std::endl;break;

		case 2:
			std::cout << this->_name << " sings so bad that everyone and " 
			<< target << " team up to shut it up" << std::endl;break;

		case 3:
			std::cout << this->_name << " insults " << target << std::endl;break;
		
		case 4:
			std::cout << this->_name << " USES A TORGUE GUN TO DESTROY " << target << std::endl;break;

		case 5:
			std::cout << this->_name << " turns invisible and to avoid " << target << std::endl;break;
		
		case 6:
			std::cout << this->_name << " bakes a delicious pie that nearly kill " << target << std::endl;break;
		
		default:
			break;
	}
}