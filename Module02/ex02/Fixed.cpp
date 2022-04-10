/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:32 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 16:30:51 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const inb) : _nb(inb) {
	// std::cout << "Int constructor called" << std::endl;
	_nb = _nb << this->_comma;
	return ;
}

Fixed::Fixed(float const fnb) {
	// std::cout << "Float constructor called" << std::endl;
	this->_nb = std::roundf(fnb * (1 << this->_comma));
	return ;
}

Fixed::Fixed(Fixed const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

void	Fixed::setnb(int nb)
{
	this->_nb = nb;
	return ;
}

int		Fixed::getnb(void) const
{
	return this->_nb;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;

	this->_nb = rhs.getRawBits();
	return (*this);
}

Fixed		Fixed::operator+(Fixed const & rhs) const {
	// std::cout << "+ operator called" << std::endl;
	return (Fixed(this->toFloat() + rhs.toFloat()));

}

Fixed		Fixed::operator-(Fixed const & rhs) const {
	// std::cout << "- operator called" << std::endl;
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed		Fixed::operator*(Fixed const & rhs) const {
	// std::cout << "* operator called" << std::endl;
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed		Fixed::operator/(Fixed const & rhs) const {
	// std::cout << "/ operator called" << std::endl;
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool		Fixed::operator>(Fixed const & rhs) const {
	return (this->_nb > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const & rhs) const {
	return (this->_nb < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const & rhs) const {
	return (this->_nb <= rhs.getRawBits());
}

bool		Fixed::operator<=(Fixed const & rhs) const {
	return (this->_nb <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const & rhs) const {
	return (this->_nb == rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const & rhs) const {
	return (this->_nb != rhs.getRawBits());
}


Fixed	&	Fixed::operator++(void) {
	this->_nb++;
	return (*this);
}

Fixed		Fixed::operator++(int) {
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&	Fixed::operator--(void) {
	this->_nb--;
	return (*this);
}

Fixed		Fixed::operator--(int) {
	Fixed tmp = *this;
	--*this;
	return (tmp);
}


std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2) {
	return(n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}

Fixed & Fixed::min(Fixed & n1, Fixed & n2) {
	return(n1.getRawBits() < n2.getRawBits() ? n1 : n2);
}

Fixed const & Fixed::max(Fixed const & n1, Fixed const & n2) {
	return(n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}

Fixed const & Fixed::min(Fixed const & n1, Fixed const & n2) {
	return(n1.getRawBits() < n2.getRawBits() ? n1 : n2);
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