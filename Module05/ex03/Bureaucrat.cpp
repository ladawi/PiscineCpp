/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:11:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/15 01:24:29 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Bureaucrat Default constuctor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name) {
	std::cout << "Bureaucrat Init constuctor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & tmp) {
	std::cout << "Bureaucrat Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat Copy assignment constuctor called" << std::endl;
	this->_Grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat Default destuctor called" << std::endl;
	return ;
}

int				Bureaucrat::getGrade(void) const {
	return (this->_Grade);
}

std::string		Bureaucrat::getName(void) const {
	return (this->_Name);
}

void			Bureaucrat::setGrade(int g) {
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = g;
	return ;
}

void			Bureaucrat::increment(void) {
	if (this->_Grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_Grade--;
	return ;
}

void			Bureaucrat::decrement(void) {
	if (this->_Grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade++;
	return ;
}

void			Bureaucrat::executeForm(AForm const & form){
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << "." << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

void			Bureaucrat::signForm(AForm & AForm) {
	if (AForm.getSigned() == 1)
	{
		std::cout << this->getName() << " couldn't sign " << AForm.getName() << " because it is already signed." << std::endl;
		return ;
	}
	try {
		AForm.beSigned(*this);
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << AForm.getName() << " because " << e.what() << "." <<std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << AForm.getName() << "." << std::endl;
	return ;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName();
	o << ", bureaucrat grade ";
	o << rhs.getGrade();
	o << "." << std::endl;
	return (o);
}