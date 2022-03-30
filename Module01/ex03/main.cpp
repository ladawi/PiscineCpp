/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:21 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:56:08 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int	main(void)
{
	Weapon Arme;
	HumanA Pierre("Pierre", Arme);
	HumanB Hugo("Hugo");
	const std::string& typeREF = Arme.gettype();

	Arme.setType("Bow");
	std::cout << "type = " << typeREF << std::endl;

	Hugo.setWeapon(Arme);
	Pierre.attack();
	Hugo.attack();

	std::cout << " __________" << std::endl;

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}