/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:07:26 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/14 22:23:30 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 72, 45), _Target(target)
{
	std::cout << "ShrubberyCreationForm Init constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & tmp) {
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm Default destructor called" << std::endl;
	return ;
}

std::string		ShrubberyCreationForm::getTarget(void) const {
	return (this->_Target);
}

void		ShrubberyCreationForm::execute(Bureaucrat &executor) const {
	if (this->getSigned() == 0)
		throw ShrubberyCreationForm::FormNotSignedException();
	else if (this->getGradeForExec() < executor.getGrade())
		throw ShrubberyCreationForm::GradeRequiredErrorException();
	std::ofstream Outfile(this->getTarget().append("_shrubbery"), std::ios::app);
	std::ifstream Tree("Tree.txt");
	std::string line;
	while ( getline (Tree,line) )
		Outfile << line << '\n';
	Outfile.close();
	return ;
}