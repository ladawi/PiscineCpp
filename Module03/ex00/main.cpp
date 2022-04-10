/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:58:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 18:00:25 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap Issou;
	ClapTrap Kekw("Jack");

	Issou = Kekw;
	std::cout << "Hello 1" << std::endl;
	std::cout << Issou.getName() << std::endl;
	std::cout << Issou.getHp() << std::endl;
	std::cout << Issou.getStamina() << std::endl;
	std::cout << Issou.getAtkdmg() << std::endl;

	Kekw.attack("jeuxvideo.com");
	Kekw.beRepaired(7);
	return (0);
}