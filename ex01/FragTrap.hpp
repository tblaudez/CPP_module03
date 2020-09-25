/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:40:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:20:34 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class FragTrap {

public:

	FragTrap(std::string name="Fragvy");
	FragTrap(FragTrap const& src);
	FragTrap& operator=(FragTrap const& rhs);
	~FragTrap();

	void			vaulthunter_dot_exe(std::string const& target);
	void			meleeAttack(std::string const& target) const;
	void			rangedAttack(std::string const& target) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	
	std::string		getname(void) const;
	int				getHitpoints(void) const;
	int				getMaxHitpoints(void) const;
	int				getEnergypoints(void) const;
	int				getmaxEnergypoints(void) const;
	int				getLevel(void) const;
	int				getMeleeAttackDamage(void) const;
	int				getRangeAttackDamage(void) const;
	int				getArmorDamageReduction(void) const;

private:

	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	unsigned int	_melee_attack_damage;
	unsigned int	_range_attack_damage;
	unsigned int	_armor_damage_reduction;
};