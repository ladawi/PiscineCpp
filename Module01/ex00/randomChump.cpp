/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/29 18:55:17 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	zombar(name);

	std::cout <<"ok\n";
	zombar.announce();
	return ;
}