/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:01:05 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/29 15:17:42 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook directory;
	std::string buff[5];
	std::string	x;
	std::string input;

	while (1)
	{
		std::cout << "Input command :" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			do
			{
				if (std::cin.eof() == 1)
					break ;
				std::cout << "Enter firstname :" << std::endl;
				std::cin >> buff[0];
			} while (buff[0].size() == 0);
			do
			{
				if (std::cin.eof() == 1)
					break ;
				std::cout << "Enter lastname :" << std::endl;
				std::cin >> buff[1];
			} while (buff[1].size() == 0);
			do
			{
				if (std::cin.eof() == 1)
					break ;
				std::cout << "Enter nickname :" << std::endl;
				std::cin >> buff[2];
			} while (buff[2].size() == 0);
			do
			{
				if (std::cin.eof() == 1)
					break ;
				std::cout << "Enter phone number :" << std::endl;
				std::cin >> buff[3];
			} while (buff[0].size() == 0);
			do
			{
				if (std::cin.eof() == 1)
					break ;
				std::cout << "Enter darkest secret :" << std::endl;
				std::cin >> buff[4];
			} while (buff[0].size() == 0);
			directory.addcontact(directory.nbaddedcontact % 8, buff);
		}
		if (input.compare("SEARCH") == 0)
		{
			directory.print();
			std::cout << "Enter index :" << std::endl;
			while (1)
			{
				std::cin >> x;
				if (x.length() == 1 && std::isdigit(x[0]) == 1 && std::stoi(x) >= 0 && std::stoi(x) < 8)
					break ;
				else
					std::cout << "Error input index, please retry : " << std::endl;
			}
			directory.tab[std::stoi(x)]->printcontact();
		}
		if (input.compare("EXIT") == 0 || std::cin.eof() == 1)
		{
			break ;
		}
	}

	return (0);
}