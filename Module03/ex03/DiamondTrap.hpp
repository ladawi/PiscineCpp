/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:15:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 20:44:59 by ladawi           ###   ########.fr       */
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

	std::string getName(void);
	void		whoAmI(void);

	// void			ScavTrap::attack(const std::string & target);

private:

	std::string		_Name;
	// unsigned int	_Hp;
	// unsigned int	_Stamina;
	// unsigned int	_Atkdmg;

};

#endif