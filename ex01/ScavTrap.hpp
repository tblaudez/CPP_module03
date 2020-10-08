/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:40:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:40:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class ScavTrap {

public:

	ScavTrap(std::string name="Scavvy");
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);
	~ScavTrap();

	std::string		getname() const;
	int				getHitpoints() const;
	int				getMaxHitpoints() const;
	int				getEnergypoints() const;
	int				getmaxEnergypoints() const;
	int				getLevel() const;
	int				getMeleeAttackDamage() const;
	int				getRangeAttackDamage() const;
	int				getArmorDamageReduction() const;

	void			challengeNewcommer(std::string const& target) const;
	void			meleeAttack(std::string const& target) const;
	void			rangedAttack(std::string const& target) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);


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
