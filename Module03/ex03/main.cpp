/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:58:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 20:51:05 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap Jean("Rito");
	FragTrap Yikes("Jack");
	FragTrap Issou;

	std::cout << "-------------" << std::endl;
	std::cout << "Issou stam = " << Issou.getStamina() << std::endl;
	Yikes.attack("jeuxvideo.com");
	std::cout << "---" << std::endl;
	Issou = Yikes;
	std::cout << "---" << std::endl;
	std::cout << Issou.getName() << " ";
	std::cout << Issou.getHp() << " ";
	std::cout << Issou.getStamina() << " ";
	std::cout << Issou.getAtkdmg() << std::endl;
	std::cout << "-" << std::endl;
	std::cout << Yikes.getName() << " ";
	std::cout << Yikes.getHp() << " ";
	std::cout << Yikes.getStamina() << " ";
	std::cout << Yikes.getAtkdmg() << std::endl;
	std::cout << "---" << std::endl;
	Issou.attack("Monaks");
	std::cout << "---" << std::endl;
	Issou.beRepaired(7);
	std::cout << "---" << std::endl;
	std::cout << "Issou hp == " << Issou.getHp() << std::endl;\
	std::cout << "---" << std::endl;
	// Issou.guardGate();
	Issou.highFivesGuys();
	std::cout << "---" << std::endl;
	std::cout << Yikes.getName() << " ";
	std::cout << Yikes.getHp() << " ";
	std::cout << Yikes.getStamina() << " ";
	std::cout << Yikes.getAtkdmg() << std::endl;
	std::cout << "---" << std::endl;
	std::cout << "Jean stamina == " << Jean.getStamina() << std::endl;
	Jean.attack("LE ROI DU SEL");
	std::cout << "Jean stamina == " << Jean.getStamina() << std::endl;

	std::cout << "----------------------------" << std::endl;

	DiamondTrap Mine("Rito");
	std::cout << "---" << std::endl;
	std::cout << Mine.getName() << " ";
	std::cout << Mine.getHp() << " ";
	std::cout << Mine.getStamina() << " ";
	std::cout << Mine.getAtkdmg() << std::endl;
	std::cout << "---" << std::endl;
	Mine.whoAmI();
	Mine.attack("joke");
	Mine.guardGate();
	Mine.highFivesGuys();

	std::cout << "----------------------------" << std::endl;

	return (0);
}