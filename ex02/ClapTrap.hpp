/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:29:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 16:13:47 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class ClapTrap {

public:

	ClapTrap(std::string name="Clappy", int hit_points=0, int max_hit_points=0, int energy_points=0,
		int max_energy_points=0, int level=0, int melee_attack_damage=0, int ranger_attack_damage=0,
		int armor_damage_reduction=0);
	ClapTrap(ClapTrap const& src);
	ClapTrap& operator=(ClapTrap const& rhs);
	~ClapTrap();

	virtual void	rangedAttack(std::string const& target) const = 0;
	virtual void	meleeAttack(std::string const& target) const = 0;
	
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

protected:

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
