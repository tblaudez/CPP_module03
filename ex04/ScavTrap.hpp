/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:50:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 14:43:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string name="Scavvy");
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);
	~ScavTrap();

	void			challengeNewcommer(std::string const& target);
	virtual void	meleeAttack(std::string const& target) const;
	virtual void	rangedAttack(std::string const& target) const;
};