/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:58:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/07 17:32:30 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap Issou;
	ClapTrap Kekw("jeuxvideo.com");

	Issou = Kekw;
	std::cout << Issou.getName() << std::endl;
	std::cout << Issou.getHp() << std::endl;
	std::cout << Issou.getStamina() << std::endl;
	std::cout << Issou.getAtkdmg() << std::endl;

	Kekw.attack("Sard");
	Kekw.beRepaired(7);
	return (0);
}