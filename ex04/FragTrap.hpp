/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 16:40:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 11:28:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {

public:

	FragTrap(std::string name="Fraggy");
	FragTrap(FragTrap const& src);
	FragTrap& operator=(FragTrap const& rhs);
	~FragTrap();

	void	vaulthunter_dot_exe(std::string const& target) const;
};
