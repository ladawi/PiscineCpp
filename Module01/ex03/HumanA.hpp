/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:36 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:55:00 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_H
# define HUMANA_H

class	HumanA {

public:

	HumanA(std::string n, Weapon &Weap);
	~HumanA(void);

	void attack(void) const;

private:

	Weapon &_arme;
	std::string _name;

};


#endif