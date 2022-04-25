/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:49:42 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 02:14:57 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>


#include "easyfind.hpp"

int	main()
{
	std::list<int>		lst1;

	std::vector<int>	v1(7,100);
	v1[2] = 17;
	std::cout << "EZ : " << *easyfind(v1, 17) << std::endl;
	v1[2] = 7;
	std::cout << "EZ : " << *easyfind(v1, 17) << std::endl;
	return (0);
}