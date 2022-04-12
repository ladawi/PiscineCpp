/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:23:06 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:30:15 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog Default constuctor called" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog Default destuctor called" << std::endl;
}

Dog::Dog(Dog const & tmp) {
	std::cout << "Dog Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Dog &		Dog::operator=(Dog const & rhs) {
	std::cout << "Dog Copy assignement constuctor called" << std::endl;
	return (*this);
}

void		Dog::makeSound(void) const {
	std::cout << "Bark Bark!" << std::endl;
	return ;
}