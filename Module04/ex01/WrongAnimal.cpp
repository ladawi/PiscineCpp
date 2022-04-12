/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:11:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:02:16 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal Default constuctor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Default destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name) {
	std::cout << "WrongAnimal Init constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & tmp) {
	std::cout << "WrongAnimal Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

WrongAnimal &		WrongAnimal::operator=(WrongAnimal const & rhs) {
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;

	this->_type = rhs.getType();
	return (*this);
}

std::string		WrongAnimal::getType(void) const {
	return (this->_type);
}

void			WrongAnimal::setType(std::string tmp) {
	this->_type = tmp;
	return ;
}

void		WrongAnimal::makeSound(void) const {
	std::cout << "(...silence...)" << std::endl;
	return ;
}
