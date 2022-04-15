/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/15 00:58:32 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef INTERN_H
# define INTERN_H

class AForm;

class	Intern {

public:
	
	Intern();
	Intern(Intern const &);
	Intern& operator=(Intern const &);
	~Intern();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooHighException in Intern");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooLowException in Intern");
			}
	};

	// void		executeForm(AForm const & form);

	// void		signForm(AForm & AForm);

	AForm*	createPForm(std::string target);
	AForm*	createRForm(std::string target);
	AForm*	createSForm(std::string target);

	AForm*	makeForm(std::string nameForm, std::string targetForm);

private:

	AForm	*(Intern::*_Tab[3])(std::string target);
	std::string _Index[3] =
	{"PresidentialPardonForm",
	"RobotomyRequestForm",
	"ShrubberyCreationForm"};



};

#endif