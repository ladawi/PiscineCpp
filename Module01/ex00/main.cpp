/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:24 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 15:45:51 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int	main()
{
	std::string kek;
	Zombie *Pierre = newZombie("");

	Pierre->announce();
	Pierre->set_name("ISSOU");
	Pierre->announce();
	kek = "ratio";
	randomChump(kek);
	delete (Pierre);
	return (0);
}