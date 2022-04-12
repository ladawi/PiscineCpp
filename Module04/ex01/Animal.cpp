/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:11:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 21:43:36 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal Default constuctor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal Default destructor called" << std::endl;
	return ;
}

Animal::Animal(std::string name) : _type(name) {
	std::cout << "Animal Init constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & tmp) {
	std::cout << "Animal Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Animal &		Animal::operator=(Animal const & rhs) {
	std::cout << "Animal Copy assignment operator called" << std::endl;

	this->_type = rhs.getType();
	return (*this);
}

std::string		Animal::getType(void) const {
	return (this->_type);
}

void			Animal::setType(std::string tmp) {
	this->_type = tmp;
	return ;
}

void		Animal::makeSound(void) const {
	std::cout << "(...silence...)" << std::endl;
	return ;
}

