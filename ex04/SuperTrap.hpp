/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:32:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/24 14:32:24 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(std::string name="default");
	SuperTrap(SuperTrap const& src);
	SuperTrap& operator=(SuperTrap const& rhs);
	~SuperTrap();

	virtual void	rangedAttack(std::string const& target) const;
	virtual void	meleeAttack(std::string const& target) const;
};