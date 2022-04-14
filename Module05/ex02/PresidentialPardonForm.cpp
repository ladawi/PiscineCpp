/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:07:26 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/14 22:38:39 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _Target(target)
{
	std::cout << "PresidentialPardonForm Init constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & tmp) {
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm Default destructor called" << std::endl;
	return ;
}

std::string		PresidentialPardonForm::getTarget(void) const {
	return (this->_Target);
}

void		PresidentialPardonForm::execute(Bureaucrat &executor) const {
	if (this->getSigned() == 0)
	{
		throw PresidentialPardonForm::FormNotSignedException();
	}
	else if (this->getGradeForExec() < executor.getGrade())
		throw PresidentialPardonForm::GradeRequiredErrorException();
	std::cout << "The target : " << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	return ;
}