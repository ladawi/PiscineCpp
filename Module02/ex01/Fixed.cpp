/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:32 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/06 14:51:15 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const inb) : _nb(inb) {
	std::cout << "Int constructor called" << std::endl;
	_nb = _nb << this->_comma;
	return ;
}

Fixed::Fixed(float const fnb) {
	std::cout << "Float constructor called" << std::endl;
	this->_nb = std::roundf(fnb * (1 << this->_comma));
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_nb = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const {
	return (this->_nb);
}

float	Fixed::toFloat(void) const {
	return (((float)(this->_nb)) / (1 << this->_comma));
}

int	Fixed::toInt(void) const {
	return (this->_nb / (1 << this->_comma));
}


int const	Fixed::_comma = 8;