/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:23:06 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:30:09 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat Default constuctor called" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat::Cat(Cat const & tmp) {
	std::cout << "Cat Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Cat &		Cat::operator=(Cat const & rhs) {
	std::cout << "Cat Copy assignement constuctor called" << std::endl;
	return (*this);
}

void		Cat::makeSound(void) const {
	std::cout << "Miaou Uwu" << std::endl;
	return ;
}