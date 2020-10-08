/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:32:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:29:42 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#include <string> // duh..


class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(std::string name="Suppy");
	SuperTrap(SuperTrap const& src);
	SuperTrap& operator=(SuperTrap const& rhs);
	~SuperTrap();

};
