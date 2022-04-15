/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:56:39 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/15 03:23:19 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	test(void)
{
	Bureaucrat z = Bureaucrat("Random", -42);

	std::cout << "[Bureaucrate _Name = " << z.getName() << "]" << std::endl;
	std::cout << "[Bureaucrate _Grade = " << z.getGrade() << "]" << std::endl;

}

int	main(void)
{
	Bureaucrat elon = Bureaucrat("Elon", 1);
	Bureaucrat mark = Bureaucrat("Mark", 150);

	std::cout << "---------START--------" << std::endl << std::endl;

	std::cout << "[Bureaucrate _Name = " << elon.getName() << "]" << std::endl;
	std::cout << "[Bureaucrate _Grade = " << elon.getGrade() << "]" << std::endl;

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
	std::cout << elon;
	std::cout << "---" << std::endl;
	std::cout << std::endl;
	std::cout << "Increment on [elon] :" << std::endl << std::endl;
	try {
		elon.increment();
		std::cout << "---" << std::endl;
		std::cout << elon;
		std::cout << "---" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}
	std::cout << "-------" << std::endl;
	std::cout << "Decrement on [elon] :" << std::endl << std::endl;
	try {
		elon.decrement();
		std::cout << "---" << std::endl;
		std::cout << elon;
		std::cout << "---" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	//---------------------
	//Proof that form is abstract;
	// AForm abstrait = AForm("Name", 42, 42);
	//---------------------
	PresidentialPardonForm h = PresidentialPardonForm("Jack");
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
	std::cout << std::endl;
	std::cout << "---" << std::endl;
	try {
		h.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	elon.signForm(h);
	std::cout << "---" << std::endl;
	try {
		h.execute(mark);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try {
		h.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	RobotomyRequestForm r = RobotomyRequestForm("Rudeus");
	std::cout << "-----------" << std::endl;

	elon.signForm(r);
	std::cout << "---" << std::endl;
	try {
		r.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		r.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		r.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	ShrubberyCreationForm Y = ShrubberyCreationForm("Yudeu");
	std::cout << "-----------" << std::endl;

	elon.signForm(Y);
	std::cout << "---" << std::endl;
	try {
		Y.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Y.execute(elon);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;

	try {
		elon.executeForm(r);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	Intern Kevin;
	std::cout << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << std::endl;

	AForm	*ptr;
	ptr = Kevin.makeForm("RobotomyRequestForm", "Ratio");

	std::cout << std::endl;
	std::cout << "---" << std::endl;

	if (ptr != NULL)
	{
		try {
			elon.executeForm(*ptr);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "-----" << std::endl;
		elon.signForm(*ptr);
		std::cout << "-----" << std::endl;
		try {
			elon.executeForm(*ptr);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "----------END----------" << std::endl;
	return (0);
}