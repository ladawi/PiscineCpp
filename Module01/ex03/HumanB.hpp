/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:29 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:49:07 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_H
# define HUMANB_H

class	HumanB {

public:

	HumanB(void);
	HumanB(std::string n);
	~HumanB(void);

	void	attack(void) const;
	void	setWeapon(Weapon &Weap);

private:

	Weapon* _arme;
	std::string _name;
};

#endif