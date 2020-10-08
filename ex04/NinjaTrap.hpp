/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:10:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:28:44 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string> // duh..



class NinjaTrap : virtual public ClapTrap {

public:

	NinjaTrap(std::string name="Naruty");
	NinjaTrap(NinjaTrap const& src);
	NinjaTrap& operator=(NinjaTrap const& rhs);
	~NinjaTrap();

	void	ninjaShoebox(ClapTrap const& target) const;
	void	ninjaShoebox(FragTrap const& target) const;
	void	ninjaShoebox(ScavTrap const& target) const;
	void	ninjaShoebox(NinjaTrap const& target) const;
};
