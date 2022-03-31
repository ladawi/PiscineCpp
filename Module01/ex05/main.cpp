/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:22:20 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/31 14:54:21 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Issou;

	std::cout << "------------" << std::endl;
	Issou.complain("");
	std::cout << "------------" << std::endl;
	Issou.complain("DEBUG");
	std::cout << "------------" << std::endl;
	Issou.complain("ERROR");
	std::cout << "------------" << std::endl;
	Issou.complain("WARNING");
	std::cout << "------------" << std::endl;
	Issou.complain("INFO");
	std::cout << "------------" << std::endl;
	Issou.complain("ISSOU");

	return (0);
}