/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:11:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/15 01:24:29 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
	std::cout << "Intern Default constuctor called" << std::endl;
	this->_Tab[0] = &Intern::createPForm;
	this->_Tab[1] = &Intern::createRForm;
	this->_Tab[2] = &Intern::createSForm;
	// this->_Index = {"Blue", "Red", "Orange"};
	return ;
}

Intern::Intern(Intern const & tmp) {
	std::cout << "Intern Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Intern &	Intern::operator=(Intern const & rhs) {
	std::cout << "Intern Copy assignment constuctor called" << std::endl;
	return (*this);
}

Intern::~Intern(void) {
	std::cout << "Intern Default destuctor called" << std::endl;
	return ;
}


AForm*	Intern::createPForm(std::string target) {
	AForm* ptr = new PresidentialPardonForm(target);
	return(ptr);
}

AForm*	Intern::createRForm(std::string target) {
	AForm* ptr = new RobotomyRequestForm(target);
	return(ptr);
}

AForm*	Intern::createSForm(std::string target) {
	AForm* ptr = new ShrubberyCreationForm(target);
	return(ptr);
}

AForm*	Intern::makeForm(std::string nameForm, std::string target) {
	int	i = 0;

	while (nameForm != this->_Index[i] && i < 3)
		i++;
	if (i != 3)
	{
		std::cout << "Intern creates " << nameForm << "." << std::endl;
		return (((*this).*_Tab[i])(target));
	}
	std::cout << "Error nameForm not in Form list" << std::endl;
	return (0);
}

// void			Intern::executeForm(AForm const & form){
// 	try {
// 		form.execute(*this);
// 		std::cout << this->getName() << " executed " << form.getName() << "." << std::endl;
// 	}
// 	catch (std::exception& e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	return ;
// }

// void			Intern::signForm(AForm & AForm) {
// 	if (AForm.getSigned() == 1)
// 	{
// 		std::cout << this->getName() << " couldn't sign " << AForm.getName() << " because it is already signed." << std::endl;
// 		return ;
// 	}
// 	try {
// 		AForm.beSigned(*this);
// 	}
// 	catch (std::exception& e) {
// 		std::cout << this->getName() << " couldn't sign " << AForm.getName() << " because " << e.what() << "." <<std::endl;
// 		return ;
// 	}
// 	std::cout << this->getName() << " signed " << AForm.getName() << "." << std::endl;
// 	return ;
// }
