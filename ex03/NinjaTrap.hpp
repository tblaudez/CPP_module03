/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:10:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 14:29:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : virtual public ClapTrap {

public:

	NinjaTrap(std::string name="Naruty");
	NinjaTrap(NinjaTrap const& src);
	NinjaTrap& operator=(NinjaTrap const& rhs);
	~NinjaTrap();

	void			ninjaShoebox(ClapTrap const& target) const;
	void			ninjaShoebox(FragTrap const& target) const;
	void			ninjaShoebox(ScavTrap const& target) const;
	void			ninjaShoebox(NinjaTrap const& target) const;
	virtual void	meleeAttack(std::string const& target) const;
	virtual void	rangedAttack(std::string const& target) const;
};