/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:07:26 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 21:03:03 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _Name("PresidentialPardonForm"), _Signed(0), _GradeForSign(25), _GradeForExec(5) {
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	_Name("PresidentialPardonForm"), _Signed(0), _GradeForSign(25), _GradeForExec(5), _Target(target)
{
	std::cout << "Init constructor called" << std::endl;
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

std::string		PresidentialPardonForm::getName(void) const {
	return (this->_Name);
}

bool			PresidentialPardonForm::getSigned(void) const {
	return(this->_Signed);
}

int				PresidentialPardonForm::getGradeForSign(void) const {
	return (this->_GradeForSign);
}

int				PresidentialPardonForm::getGradeForExec(void) const {
	return (this->_GradeForExec);
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) {
	std::cout << "The target : " << this->getTarget() << " has been forgiven by Zaphod Beeblebrox.";
	return ;
}