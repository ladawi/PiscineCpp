/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:11:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 16:51:32 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "AAnimal Default constuctor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Default destructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string name) : _type(name) {
	std::cout << "AAnimal Init constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & tmp) {
	std::cout << "AAnimal Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

AAnimal &		AAnimal::operator=(AAnimal const & rhs) {
	std::cout << "AAnimal Copy assignment operator called" << std::endl;

	this->_type = rhs.getType();
	return (*this);
}

std::string		AAnimal::getType(void) const {
	return (this->_type);
}

void			AAnimal::setType(std::string tmp) {
	this->_type = tmp;
	return ;
}

void		AAnimal::makeSound(void) const {
	std::cout << "(...silence...)" << std::endl;
	return ;
}

