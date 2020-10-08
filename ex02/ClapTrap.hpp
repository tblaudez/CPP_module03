/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:29:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:40:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class ClapTrap {

public:

	ClapTrap(std::string name="Clappy", int hit_points=0, int max_hit_points=0, int energy_points=0,
		int max_energy_points=0, int level=0, int melee_attack_damage=0, int range_attack_damage=0,
		int armor_damage_reduction=0);
	ClapTrap(ClapTrap const& src);
	ClapTrap& operator=(ClapTrap const& rhs);
	~ClapTrap();

	std::string		getname() const;
	int				getHitpoints() const;
	int				getMaxHitpoints() const;
	int				getEnergypoints() const;
	int				getmaxEnergypoints() const;
	int				getLevel() const;
	int				getMeleeAttackDamage() const;
	int				getRangeAttackDamage() const;
	int				getArmorDamageReduction() const;

	void			rangedAttack(std::string const& target) const;
	void			meleeAttack(std::string const& target) const;

	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);


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
