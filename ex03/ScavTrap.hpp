/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:50:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:12:57 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string name="Scavvy");
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);
	~ScavTrap();

	void	challengeNewcommer(std::string const& target) const;
};
