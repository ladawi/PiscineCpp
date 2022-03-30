/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:20:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 16:30:35 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Adress of str : " << &str << std::endl;
	std::cout << "Adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress held by stringREF : " << &stringREF << std::endl;
	std::cout << "str == " << str << std::endl;
	std::cout << "Value pointed to by stringPTR == " << *stringPTR <<std::endl;
	std::cout << "Value pointed to by stringPTR == " << stringREF <<std::endl;
	return (0);
}