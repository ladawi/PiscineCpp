/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:07:26 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/14 22:23:30 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _Target(target)
{
	std::cout << "RobotomyRequestForm Init constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & tmp) {
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm Default destructor called" << std::endl;
	return ;
}

std::string		RobotomyRequestForm::getTarget(void) const {
	return (this->_Target);
}

void		RobotomyRequestForm::execute(Bureaucrat &executor) const {
	if (this->getSigned() == 0)
		throw RobotomyRequestForm::FormNotSignedException();
	else if (this->getGradeForExec() < executor.getGrade())
		throw RobotomyRequestForm::GradeRequiredErrorException();
	std::cout << "Bzzz bzzzz bzzzzzzzzzzzz" << std::endl;
	if (rand() % 2 == 1)
		std::cout << "Bip boup : the target -> " << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Error Error Error ... robotomization failed" << std::endl;
	return ;
}