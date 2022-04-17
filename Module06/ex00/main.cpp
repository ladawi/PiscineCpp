/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/17 04:58:30 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "convert.hpp"

int	main(int ac, char *av[])
{
	Convert C;

	int i;
	std::cout << "----------" << std::endl;
	// try {
	// 	C.setContent(av[1]);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Error " << e.what() <<std::endl;
	// }

	// i = static_cast<int>(av[1]);
	char* str = av[1];

	// void *a = &str;
	// int j = static_cast<int>(av[1]);
	// char c = static_cast<char>(av[1]);

	// i = std::atoi(av[1]);
	std::cout << av[1] << " I = " << j << std::endl;
	std::cout << "----------" << std::endl;
	return (0);	
}