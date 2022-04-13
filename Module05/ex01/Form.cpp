/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:26:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 18:56:50 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _Name(""), _Signed(0), _GradeForSign(150), _GradeForExec(150) {
	std::cout << "Form Default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int signlvl, int execlvl) :
	_Name(name), _Signed(0), _GradeForSign(signlvl), _GradeForExec(execlvl)
{
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

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << "Form " << rhs.getName() << ", Signed ? " << rhs.getSigned()
		<< " .Need Grade level " << rhs.getGradeForSign() << " to get signed and Grade level "
			<< rhs.getGradeForExec() << " to get Exec." << std::endl;
	return (o);
}