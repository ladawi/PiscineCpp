/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:19:07 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 17:30:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {
	std::cout << "Data Default constructor called" << std::endl;
	return ;
}

Data::Data(std::string name, int val) : _Name(name), _Value(val) {
	std::cout << "Data init constructor called" << std::endl;
	return ;
}

Data::Data(Data const &tmp) {
	std::cout << "Data copy constructor called" << std::endl;
	_Name = tmp.getName();
	_Value = tmp.getValue();
	*this = tmp;
	return ;
}

Data &	Data::operator=(Data const & rhs) {
	this->_Name = rhs.getName();
	this->_Value = rhs.getValue();
	return (*this);
}

Data::~Data(void) {
	std::cout << "Data Default destructor called" << std::endl;
	return ;
}

std::string		Data::getName(void) const {
	return (this->_Name);
}

int				Data::getValue(void) const {
	return (this->_Value);
}