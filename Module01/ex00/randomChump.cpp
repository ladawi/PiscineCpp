/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 15:35:04 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name)
{
	if (name.c_str() != NULL)
	{
		Zombie	zombar(name);

		zombar.announce();
	}
	return ;
}