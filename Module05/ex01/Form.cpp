/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:26:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 21:54:16 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _Name(""), _Signed(0), _GradeForSign(150), _GradeForExec(150) {
	std::cout << "Form Default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int signlvl, int execlvl) :
	_Name(name), _Signed(0)
{
	if (signlvl < 1 || execlvl < 1)
		throw Form::GradeTooHighException();
	else if (signlvl > 150 || execlvl > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->_GradeForSign = signlvl;
		this->_GradeForExec = execlvl;
	}
	std::cout << "Init constructor called" << std::endl;
	return ;
}

Form::Form(Form const & tmp) {
	std::cout << "Form Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

Form &	Form::operator=(Form const & rhs) {
	return (*this);
}

Form::~Form(void) {
	std::cout << "Form Default destructor called" << std::endl;
	return ;
}

std::string		Form::getName(void) const {
	return (this->_Name);
}

bool			Form::getSigned(void) const {
	return(this->_Signed);
}

int				Form::getGradeForSign(void) const {
	return (this->_GradeForSign);
}

int				Form::getGradeForExec(void) const {
	return (this->_GradeForExec);
}

void			Form::setGradeForSign(int g) {
	if (g < 1)
		throw Form::GradeTooHighException();
	else if (g > 150)
		throw Form::GradeTooLowException();
	else
		this->_GradeForSign = g;
}

void			Form::setGradeForExec(int g) {
	if (g < 1)
		throw Form::GradeTooHighException();
	else if (g > 150)
		throw Form::GradeTooLowException();
	else
		this->_GradeForExec = g;
}

bool			Form::beSigned(Bureaucrat const & executor) {
	if (executor.getGrade() <= this->_GradeForSign)
		this->_Signed = 1;
	else
		throw Form::GradeTooLowException();
	return (this->_Signed);
}


std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << "Form named : " << rhs.getName() << ", Signed ? " << rhs.getSigned()
		<< ". Need Grade level " << rhs.getGradeForSign() << " to get signed and Grade level "
			<< rhs.getGradeForExec() << " to get Exec." << std::endl;
	return (o);
}