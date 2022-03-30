/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:50:42 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 16:19:18 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	nbZomb = 42;
	Zombie *Pierre = zombieHorde(nbZomb, "Pierre");
	Zombie *Hugo = zombieHorde(nbZomb / 2, "Hugo");
	Zombie *Jack = zombieHorde(nbZomb * 0, "Jack");
	
	std::cout << "Annonce all Pierre zombs" << std::endl;
	for (int i = 0; i < nbZomb; i++) {
		std::cout << "i == " << i << " | " ;
		Pierre[i].announce();
	}
	std::cout << "Annonce all Hugo zombs" << std::endl;
	for (int i = 0; i < nbZomb / 2; i++) {
		std::cout << "i == " << i << " | " ;
		Hugo[i].announce();
	}
	std::cout << "Annonce all Jack zombs" << std::endl;
	for (int i = 0; i < nbZomb * 0; i++) {
		std::cout << "i == " << i << " | " ;
		Jack[i].announce();
	}
	delete [] Pierre;
	delete [] Hugo;
	delete [] Jack;
	return (0);
}