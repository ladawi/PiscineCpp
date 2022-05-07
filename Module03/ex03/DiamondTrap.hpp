/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:15:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/07 18:21:56 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

class	DiamondTrap : virtual public ClapTrap, public ScavTrap, public FragTrap {

public:

	DiamondTrap();
	DiamondTrap(DiamondTrap const &);
	DiamondTrap(std::string name);
	DiamondTrap& operator=(DiamondTrap const &);
	~DiamondTrap();

	std::string getName(void) const;
	void		whoAmI(void);

private:

	std::string		_Name;

};

#endif