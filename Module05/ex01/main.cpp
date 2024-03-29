/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:56:39 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 22:11:58 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test(void)
{
	Bureaucrat z = Bureaucrat("Random", -42);

	std::cout << "[Bureaucrate _Name = " << z.getName() << "]" << std::endl;
	std::cout << "[Bureaucrate _Grade = " << z.getGrade() << "]" << std::endl;

}

int	main(void)
{
	Bureaucrat x = Bureaucrat("Jean", 1);

	std::cout << "---------START--------" << std::endl << std::endl;

	std::cout << "[Bureaucrate _Name = " << x.getName() << "]" << std::endl;
	std::cout << "[Bureaucrate _Grade = " << x.getGrade() << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;
	try {
		test();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;
	std::cout << "---" << std::endl;
	std::cout << x;
	std::cout << "---" << std::endl;
	std::cout << std::endl;
	std::cout << "Increment on [x] :" << std::endl << std::endl;
	try {
		x.increment();
		std::cout << "---" << std::endl;
		std::cout << x;
		std::cout << "---" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}
	std::cout << "-------" << std::endl;
	std::cout << "Decrement on [x] :" << std::endl << std::endl;
	try {
		x.decrement();
		std::cout << "---" << std::endl;
		std::cout << x;
		std::cout << "---" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;

	Form h = Form("Formulaire 1", 14 , 42);
	std::cout << "---" << std::endl;
	std::cout << "Setting wrong grade for Exec (-42) :" << std::endl;
	try {
		h.setGradeForExec(-42);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	std::cout << "---" << std::endl;
	std::cout << "Setting wrong grade for Sign (420) :" << std::endl;
	try {
		h.setGradeForSign(420);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout << std::endl;

	std::cout << h;

	try {
		h.beSigned(x);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------" << std::endl;
	std::cout << h;
	std::cout << "---------------" << std::endl;
	std::cout << std::endl;
	x.signForm(h);
	std::cout << std::endl << "----------END-------" << std::endl;
	return (0);
}