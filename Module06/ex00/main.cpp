/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/19 16:29:18 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include "convert.hpp"
# include <iostream>
# include <iomanip>

int	main(int ac, char *av[])
{
	Convert C;

	int i;
	// std::cout << "----------" << std::endl;
	if (ac == 2)
	{
		C.setStr(av[1]);
		try	{
			std::cout << "char: " << C.converttochar() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() <<std::endl;
		}
		// std::cout << "-----" << std::endl;
		try	{
			std::cout << "int: " << C.converttoint() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		// std::cout << "-----" << std::endl;
		try	{
			std::cout << std::fixed << std::setprecision(1) << "float: " << C.converttofloat() << "f" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}		
		// std::cout << "-----" << std::endl;
		try	{
			std::cout << std::fixed << std::setprecision(1) << "double: " << C.converttodouble() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Wrong nb arg" << std::endl;
	// std::cout << "----------" << std::endl;
	return (0);	
}