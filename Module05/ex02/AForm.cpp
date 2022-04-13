/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:26:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 22:27:03 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _Name(""), _Signed(0), _GradeForSign(150), _GradeForExec(150) {
	std::cout << "AForm Default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, int signlvl, int execlvl) :
	_Name(name), _Signed(0)
{
	if (signlvl < 1 || execlvl < 1)
		throw AForm::GradeTooHighException();
	else if (signlvl > 150 || execlvl > 150)
		throw AForm::GradeTooLowException();
	else
	{
		this->_GradeForSign = signlvl;
		this->_GradeForExec = execlvl;
	}
	std::cout << "Init constructor called" << std::endl;
	return ;
}

AForm::AForm(AForm const & tmp) {
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

AForm &	AForm::operator=(AForm const & rhs) {
	return (*this);
}

AForm::~AForm(void) {
	std::cout << "AForm Default destructor called" << std::endl;
	return ;
}

std::string		AForm::getName(void) const {
	return (this->_Name);
}

bool			AForm::getSigned(void) const {
	return(this->_Signed);
}

int				AForm::getGradeForSign(void) const {
	return (this->_GradeForSign);
}

int				AForm::getGradeForExec(void) const {
	return (this->_GradeForExec);
}

void			AForm::setGradeForSign(int g) {
	if (g < 1)
		throw AForm::GradeTooHighException();
	else if (g > 150)
		throw AForm::GradeTooLowException();
	else
		this->_GradeForSign = g;
}

void			AForm::setGradeForExec(int g) {
	if (g < 1)
		throw AForm::GradeTooHighException();
	else if (g > 150)
		throw AForm::GradeTooLowException();
	else
		this->_GradeForExec = g;
}

bool			AForm::beSigned(Bureaucrat const & executor) {
	if (executor.getGrade() <= this->_GradeForSign)
		this->_Signed = 1;
	else
		throw AForm::GradeTooLowException();
	return (this->_Signed);
}


std::ostream &	operator<<(std::ostream & o, AForm const & rhs) {
	o << "AForm named : " << rhs.getName() << ", Signed ? " << rhs.getSigned()
		<< ". Need Grade level " << rhs.getGradeForSign() << " to get signed and Grade level "
			<< rhs.getGradeForExec() << " to get Exec." << std::endl;
	return (o);
}