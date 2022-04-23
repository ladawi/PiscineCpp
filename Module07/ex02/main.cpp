/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/23 19:17:56 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.hpp"

template< typename T>
void	iter(T tab[], size_t len, void	func(T &arg)) {
	for (size_t i = 0; i < len; i++)
		func(tab[i]);
	return ;
}

template<typename T>
void	function(T &param)
{
	std::cout << "print = " << param << std::endl;
}

template<typename T>
void	function2(T &param)
{
	param = 42;
}

int	main(int ac, char **av)
{
	int	array1[7] = {0,1,2,3,4,5,6};
	
	iter(&array1[0]	, 3, function);
	std::cout << "---" << std::endl;
	iter(&array1[0]	, 7, function);
	std::cout << "---" << std::endl;
	iter(av[0], 7, function);
	std::cout << "---" << std::endl;
	iter(av[0], 7, function2);
	std::cout << "---" << std::endl;
	iter(av[0], 7, function);
	return (0);
}