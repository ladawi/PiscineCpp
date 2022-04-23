/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/23 20:53:18 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(int ac, char **av)
{
	Array<int>one(42);
	Array<int>two;
	Array<int>three(one);

	std::cout << "=========================" << std::endl;
	std::cout << "== TEST WITH ARRAY INT ==" << std::endl;
	std::cout << "=========================" << std::endl;
	int i = 0;
	while (i < 42)
	{
		one[i] = i;
		i++;
	}
	std::cout << "Set 0 in one" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Set 42 in one[7]" << std::endl;
	one[7] = 42;
	std::cout << "----------------" << std::endl;
	try {
		one[123] = 'e';
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	std::cout << "Size one = " << one.size() << std::endl;
	std::cout << "Size two = " << two.size() << std::endl;
	std::cout << "Size three = " << three.size() << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Content in one._Array[] and in test2._Array[] using operator[]" << std::endl << std::endl;
	try {
		i = 0;
		while (i < 21)
		{
			std::cout << "one:\t"<< one[i] << "\t\ttest2:\t" << two[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	two = one;
	std::cout << "assignement : two = one" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Content in one._Array[] and in test2._Array[] using operator[]" << std::endl << std::endl;
	i = 0;
	while (i < 21)
	{
		std::cout << "one:\t"<< one[i] << "\t\ttest2:\t" << two[i] << std::endl;
		i++;
	}
	std::cout << "----------------" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "= SAME TEST WITH ARRAY STRING =" << std::endl;
	std::cout << "===============================" << std::endl;
	Array<std::string>un(42);
	Array<std::string>deux;
	Array<std::string>trois(un);

	std::cout << "=============================" << std::endl;

	i = 0;
	while (i < 42)
	{
		un[i] = "Void";
		i++;
	}
	std::cout << "Set Void in un" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Set Issou in un[17]" << std::endl;
	un[17] = "ISSOU";
	std::cout << "----------------" << std::endl;
	try {
		un[123] = 'e';
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	std::cout << "Size un = " << un.size() << std::endl;
	std::cout << "Size deux = " << deux.size() << std::endl;
	std::cout << "Size trois = " << trois.size() << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Content in un._Array[] and in test2._Array[] using operator[]" << std::endl << std::endl;
	try {
		i = 0;
		while (i < 21)
		{
			std::cout << "un:\t"<< un[i] << "\t\ttest2:\t" << deux[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	deux = un;
	std::cout << "assignement : deux = un" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Content in un._Array[] and in test2._Array[] using operator[]" << std::endl << std::endl;
	i = 0;
	while (i < 21)
	{
		std::cout << "un:\t"<< un[i] << "\t\ttest2:\t" << deux[i] << std::endl;
		i++;
	}
	std::cout << "=============================" << std::endl;
	return (0);
}